#include <stdio.h>
#include <stdlib.h>

#include "aliases.h"
void check(array* temp){
    temp->used = 0;
    for(int i = 0; i < temp->total; i++){
        if(temp->data[i] != 0){
            temp->used += 1;
        }    
    }
}

array* create(u64 length) {
    array* temp = (array*) malloc(sizeof(array));
    if (temp == NULL) {
        exit(EXIT_FAILURE);
    }
    temp->data = (int*) calloc(length, sizeof(int));

    temp->total = length;
    temp->used = 0;
    return temp;
}
void destroy(array* temp){
    free(temp->data);
    free(temp);
}

void resize(array* temp){
    check(temp);
    if((temp->total - temp->used) != 0){
        return;
    }
    else{
        temp->data = realloc(temp->data, 2 * temp->total * sizeof(int));
        temp->total *= 2;
    }
}
void append(array *temp, int pos, int val){
    check(temp);
    resize(temp); //auto checks if there is space or not...

    //case 1 we want to append in the beginning
    if(pos == 0){
    for(int i = temp->used-1; i > 0; i--){
        temp->data[i] = temp->data[i-1];
        }
        temp->data[0] = val;
        temp->used++;
    }
    //case 2 we want to append at the very end
    else if(pos == temp->used){
        temp->data[temp->used] = val;
        temp->used++;
    }
    //case 3 we want to append in the middle
    else{
        for(int i = temp->used - 1; i >= pos; i--){
            temp->data[i+1] = temp->data[i];
        }
        temp->data[pos] = val;
        temp->used++;
    }

}



