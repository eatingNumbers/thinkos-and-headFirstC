#include <stdio.h>

void go_south_east(int *lat, int *lon) {

    (*lat)--;
    (*lon)++;

//  These statements are equivalent to the above.
//  *lat = *lat - 1; 
//  *lon = *lon + 1;

}

int main() {

    int latitude = 32;
    int longtitude = -64;

    go_south_east(&latitude, &longtitude);

    printf("Avast! Now at: [%i, %i]\n", latitude, longtitude);

    return 0;
}
