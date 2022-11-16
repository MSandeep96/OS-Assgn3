#include "user.h"

int main(int argc, char *argv[]) {
    int seed = 1;
    int N = 1000;
    if(argc >= 2) {
        seed = atoi(argv[1]);
    }
    if (argc >= 3) {
        N = atoi(argv[2]);
    }
    srand(seed);
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
    printf(1, "Min: %d, Max: %d, Mean: %d, Min + Max/2 : %d \n", min, max, (int)mean, min + (max - min)/2);
    exit();
}