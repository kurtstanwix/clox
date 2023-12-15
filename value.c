//
// Created by Kurt on 15/12/2023.
//

#include <stdio.h>

#include "value.h"
#include "memory.h"

void initValueArray(ValueArray* array) {
    array->count = 0;
    array->capacity = 0;
    array->values = NULL;
}

void freeValueArray(ValueArray* array) {
    FREE_ARRAY(Value, array->values, array->capacity);
    initValueArray(array);
}

void writeValueArray(ValueArray* array, Value byte) {
    if (array->capacity < array->count + 1) {
        int oldCapacity = array->capacity;
        array->capacity = GROW_CAPACITY(oldCapacity);
        array->values = GROW_ARRAY(Value, array->values, oldCapacity, array->capacity);
    }
    array->values[array->count] = byte;
    array->count++;
}

void printValue(Value value) {
    printf("%g", value);
}
