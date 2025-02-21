#ifndef TYPES_H_
#define TYPES_H_

#include <cstddef>
#include <cstdlib>
#include <cstring>

typedef struct {
    int *data;
    size_t len;
} Array;

void *safe_alloc(size_t len, size_t size) {
    void *data = calloc(len, size);
    if (data == NULL) {
        exit(1);
    }
    return data;
}

Array *init(size_t len, int * input) {
    Array *array = (Array *)safe_alloc(1, sizeof(Array));
    array->data = (int *)safe_alloc(len, sizeof(int));
    memcpy(array->data, input, len * sizeof(int));
    array->len = len;
    return array;
}

#endif  // TYPES_H_
