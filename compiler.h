//
// Created by Kurt on 16/12/2023.
//

#ifndef CLOX_COMPILER_H
#define CLOX_COMPILER_H

#include "object.h"
#include "chunk.h"

bool compile(const char* source, Chunk* chunk);

#endif //CLOX_COMPILER_H
