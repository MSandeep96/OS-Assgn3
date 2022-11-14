#include "kernel/types.h"
#include "kernel/stat.h"
#include "user.h"

#define N 15

int main(void) {
    int nVal = nice(0), retVal;
    for(int i=-N;i<=N;i++){
        retVal = fork();
        if(retVal == 0){
            nVal = nice(-i * 2);
            printf(1, "Pid: %d, Nice value: %d \n", getpid(), nVal);
            exit();
        }
    }
    for(int i=-N;i<=N;i++){
        wait();
    }
    printf(1, "Pid: %d, Nice value: %d \n", getpid(), nVal);
    exit();
}