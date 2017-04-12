#include "encrypt.h"

// Implementation of the encrypt function declared in encrypt.h
void encrypt(char *message) {

    while (*message) {
    
        *message = *message ^ 31;
        message++;
    }
}
