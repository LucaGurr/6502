#include <stdio.h>
#include "defs.h"
#include "funcs.c"

int main() {
    CPU cpu;
    MEM mem;

    reboot(&cpu, &mem);
}
