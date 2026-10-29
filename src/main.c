#include <stdio.h>
#include <defs.c>

int main() {
    CPU cpu;
    MEM mem;

    reboot(&cpu, &mem);
}
