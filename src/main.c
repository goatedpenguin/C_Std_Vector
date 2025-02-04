#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "aliases.h"

int main() {
    array* myArray = create(10);

    append(myArray, 0, 10);
    append(myArray, 1, 20);
    append(myArray, 2, 30);
    

    // Print the array to see if elements were added correctly
    for (int i = 0; i < myArray->used; i++) {
        printf("%d ", myArray->data[i]);
    }

    destroy(myArray);  // Clean up
    return 0;
}
