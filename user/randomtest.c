#include "user.h"

#define N 1000

int main(void) {
    srand(10);
    int t = rand();
    int min = t, max = t;
    float mean = t;
    int t_count = 1;
    for(int i=0;i<N-1;i++){
        t = rand();
        t_count++;
        if(t < min)
            min = t;
        if(t > max)
            max = t;
        float newMean = (t-mean) / t_count;
        mean += newMean;
    }
    printf(1, "Min: %d, Max: %d, Mean: %f", min, max, mean);
}