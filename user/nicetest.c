#include "kernel/types.h"
#include "kernel/stat.h"
#include "user.h"

#define N 15

int main(void) {
    int nVal = nice(0), pid;
    for(int i=-N;i<=N;i++){
        pid = fork();
        if(pid == 0){
            nVal = nice(-N * 2);
        }
    }
    if(pid !=0){
        
    }
}