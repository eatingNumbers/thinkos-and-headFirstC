#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

int main (int argc, char *argv[]) {
    char *feeds[] = {
                        "https://www.usda.gov/rss/latest-blogs.xml",
                        "https://www.osha.gov/news/newsreleases.xml",
                        "http://feeds.bbci.co.uk/news/world/us_and_canada/rss.xml"};
    
    int times = 3;
    char *phrase = argv[1];
    int i;
    for (i = 0; i < times; i++) {
        char var[255];
        sprintf(var, "RSS_FEED=%s", feeds[i]);
        char *vars[] = {var, NULL};
        
        pid_t pid = fork();

        if (pid == -1) {
            fprintf(stderr, "Can't fork process: %s\n", strerror(errno));
            return 1;
        }

        if (!pid) {
            if (execle("/usr/bin/python", "/usr/bin/python", "./rssgossip.py", phrase, NULL, vars) == -1) {
                fprintf(stderr, "Can't run script: %s\n", strerror(errno));
                return 1;
            }
        }
    }
    return 0;
}
