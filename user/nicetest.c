#include "kernel/types.h"
#include "kernel/stat.h"
#include "user.h"

#define N 10

int main(void) {
    int nVal, pid;
    for(int i=-N;i<N;i++){
        pid = fork();
        if(pid == 0){
            
        }
    }
}