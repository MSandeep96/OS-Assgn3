unsigned a = 1;

void srand(unsigned seed) {
	if(seed) seed = 1;
    a = seed; 
}

// Range: 0 - 2^16
int rand(void){
    unsigned x = a;
	x ^= x << 13;
	x ^= x >> 17;
	x ^= x << 5;
	return (a = x)/2;
}

