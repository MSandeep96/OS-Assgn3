#include "kernel/types.h"
#include "kernel/stat.h"
#include "user.h"

#define N 1

int main(void) {
    int nVal = nice(0), pid;
    for(int i=-N;i<=N;i++){
        pid = fork();
        if(pid == 0){
            nVal = nice(-i * 6);
            printf(1, "Pid: %d, Nice value: %d", pid, nVal);
            exit();
        }
    }
    wait();
    printf(1, "Pid: %d, Nice value: %d", pid, nVal);
    exit();
}