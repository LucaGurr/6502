#pragma once

typedef unsigned short WORD;
typedef unsigned char BYTE;
typedef unsigned int u32;

#define MAX_DATA (1024 * 64)        // 64KB

typedef struct SCpu {
    WORD PC;                        // Program Counter
    BYTE SP;                        // Stack Pointer
    BYTE A, X, Y;                   // Registers
    BYTE C, Z, I, D, B, O, N;      // Flags
} CPU;

typedef struct SMem {
    BYTE Data[MAX_DATA];
} MEM;
 