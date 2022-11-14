#include "kernel/random.h"

#define N 1000

int main(void) {
    srand(10);
    int min = rand(), max = rand(), mean = 0;
    int t_count = 0;
    for(int i=0;i<N-1;i++){
        int t = rand();
        if(t < min)
            min = t;
        if(t > max)
            max = t;
        
    }
}