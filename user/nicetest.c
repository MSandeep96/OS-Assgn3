#include "kernel/types.h"
#include "kernel/stat.h"
#include "user.h"

int main(void) {
    int pid = fork();
    if(pid==0){
        nice(4)
    }
}