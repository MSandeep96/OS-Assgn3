#include "user.h"

#define N 20

int main(void) {
    
    srand(25);
    unsigned t = rand();
    unsigned min = t, max = t;
    float mean = t;
    int t_count = 1;
    for(int i=0;i<N-1;i++){
        t = rand();
        printf(1, "%d", t);
        t_count++;
        if(t < min)
            min = t;
        if(t > max)
            max = t;
        float newMean = (t-mean) / t_count;
        mean += newMean;
    }
    printf(1, "Min: %d, Max: %d, Mean: %d \n", min, max, (int)mean);
    exit();
}