#include <stdio.h>
#include <stdlib.h>
#include "aliases.h"
//WE NEED TO IMPLEMENT THIS, NOT THE FUNCTION DECLERATION BUT DEFINE IT...
array *create = (sizeof(array));
int create(u64 length){
    create->data = malloc(length*sizeof(int));
    for(int i = 0; i < length; i++){
        create->data[i] = 0;
    }
}
void destroy(int *array){
    
}
int *resize(int *array);
int *append(int *array, int elem);
int isempty(int *array);


//size is how much is used 
//capacity is how much in total