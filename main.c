#include <stdio.h>
#include "main.h"

#define GRAD 12
#define ECHO 7

struct Sequences {
    char *spin_echo;
    char *experiment;
    char *end_sequences;
};

int main(void) {
    
    int numbers[5] = {1, 2, 3, 4, 5};
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // let's play with structs
    struct Sequences sequence;

    sequence.spin_echo = "The spin echo sequence is on and running!\n";

    printf("\n%s\n", sequence.spin_echo);

    printf("Hello Leo, Well be back to C\n");
    greet("McBills");
    shout_out("Kinyera");

    printf("%d\n", GRAD + ECHO);

    /* Diving into the field of arrays, Awesome! */
    // Print the original array elements
    printf("Original array:\n");
    for (int i=0; i<5; i++) {
        printf("Element %d: %d\n", i, numbers[i]);
    }

    // Modify some elements
    numbers[0] = 10;
    numbers[2] = 30;

    // Print the modified array elements
    printf("\nModified array:\n");
    for (int i = 0; i<5; i++) {
        printf("Element %d: %d\n", i, numbers[i]);
    }

    return (0);
}
