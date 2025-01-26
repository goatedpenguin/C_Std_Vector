ASSIGNMENT:

#########################################
Implement a heap allocated resizable array using C's memory management functions:
malloc, realloc and free.
You must implement the following interface:

```c
typedef struct Array Array;
struct Array {
    u64 length;
    u64 capacity;
    TYPE *data;
};

Array_TYPE Array_TYPE_create(u64 length);
void Array_TYPE_destroy(Array_TYPE *array);
TYPE *Array_TYPE_resize(Array_TYPE *array);
TYPE *Array_TYPE_append(Array_TYPE *array, TYPE elem);
int Array_TYPE_is_empty(Array_TYPE *array);
```
#########################################

