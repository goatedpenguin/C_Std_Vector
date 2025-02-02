std::vector(only for ints rn) written in C, FUCK ALL THE CPP PROGRAMMERS

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

int create(array** temp, u64 length);
void destroy(array* temp);
void resize(array* temp);
void append(array* temp, int pos, int val);
void check(array* temp);
```
#########################################

