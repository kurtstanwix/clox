#include "common.h"
#include "chunk.h"
#include "debug.h"
#include "vm.h"

int main(int argc, const char* argv[]) {
    initVM();
    Chunk chunk;
    initChunk(&chunk);
    for (int i = 0; i < 257; ++i) {
        writeConstant(&chunk, 1.2 * i, 123);
    }
    
    writeChunk(&chunk, OP_RETURN, 123);
    
    disassembleChunk(&chunk, "test chunk");
    interpret(&chunk);
    freeVM();
    freeChunk(&chunk);
    return 0;
}
