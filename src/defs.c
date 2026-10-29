typedef unsigned short WORD;
typedef unsigned char BYTE;

#define MAX_DATA (1024 * 64)

typedef struct SCpu {
    WORD PC;                        // Program Counter
    BYTE SP;                        // Stack Pointer

    BYTE X,Y,Z;                     // Registers

    BYTE C, ZE, I, D, B, O, N;      // Flags
} CPU;

typedef struct SMem{
    BYTE Data[MAX_DATA];
} MEM;