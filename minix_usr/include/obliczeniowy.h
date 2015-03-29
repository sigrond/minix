#include<lib.h>

int setObliczeniowy(pid_t pid)
{
    message m;
    m.m1_i1=pid;
    return _syscall(MM, NOWY_OBLICZENIOWY, &m);
}
