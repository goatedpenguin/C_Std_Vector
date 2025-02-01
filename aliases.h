#pragma once

#include <stdint.h>
#include <stdbool.h>

//type aliases
typedef float f32;
typedef double f64;
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;

typedef struct arrayTemplate{
    u64 used;
    u64 total;
    int *data;
}array;


int create(u64 length);
void destroy(int *array);
void resize(int *array);
int append(int *array, int elem);
void check(array* temp);

 

