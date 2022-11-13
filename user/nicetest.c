#include "kernel/types.h"
#include "kernel/stat.h"
#include "user.h"

int main(void) {
    int nVal;
    int pid = fork();
    if(pid==0){
        nVal = nice(4);
    }else {
        nVal = nice(0);
    }
    printf(1, "pid = %d, nice value = %d", pid, nVal);
}