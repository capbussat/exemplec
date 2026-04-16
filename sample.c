#include <stdio.h>
#include <stdlib.h>

void endFunction() {
    printf("This function is called before the program ends.\n");
}

int main() {
    // Registering endFunction to be called on program exit
    atexit(endFunction);

    printf("Starting the program...\n");

    // Normal program exit with success status
    if (1) {
        printf("Program exiting normally.\n");
        exit(0); // Successful termination
    }

    // This code will never be executed due to the above exit
    printf("This won't be printed.\n");

    return 0;
}

