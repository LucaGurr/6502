#include "defs.h"
#include <stdio.h>

void initialise(MEM *mem) {
    for(u32 i = 0; MAX_DATA; i++){
        mem->Data[i] = 0;
    }
}

void reboot(CPU *cpu, MEM *mem) {
    cpu->PC     = 0xFFFC;       // Program Counter:         *65.532*
    cpu->SP     = 0xFF;         // Stack Pointer:           *255*

    // setting all 3 registers to 0
    cpu->A      = 0;
    cpu->X      = 0;
    cpu->Y      = 0;

    // setting all 7 flags to 0
    cpu->C      = 0;
    cpu->Z      = 0;
    cpu->I      = 0;
    cpu->D      = 0;
    cpu->B      = 0;
    cpu->O      = 0;
    cpu->N      = 0;

    initialise(mem);
}
