#include <stdio.h>
#include <stdlib.h>

#include "aliases.h"
//we need to define these functions here!!!

int create(array* temp, u64 length){
    temp = (array*) malloc(sizeof(array));
    if(temp == NULL){
        exit(EXIT_FAILURE);
    }
    temp->data = (int*) malloc(length*sizeof(int));
    for(int i = 0; i < length*sizeof(int); i++){
        temp->data[i] = NULL;
    }
    temp->total = sizeof(temp->data); temp->used = 0;
    return 0;
}

void destroy(array* temp){
    free(temp);
}

void resize(array* temp, size_t sizeRet){
    check(temp);
    if((temp->total - temp->used) != 0){
        return;
    }
    else{
        temp->data = realloc(temp->data, 2 * temp->total * sizeof(int));
        temp->total *= 2;
    }
}
int append(int *array, int elem){

}

void check(array* temp){
    temp->used = 0;
    for(int i = 0; i < temp->total; i++){
        if(temp->data[i] != 0){
            temp->used += 1;
        }
        else{
            continue;
        }        
    }
}


// typedef struct arrayTemplate{
//     u64 used;
//     u64 total;
//     int *data;
// }array;



//used is how much is used 
//total is how much in total

