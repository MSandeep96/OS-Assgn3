unsigned a = 1;

void srand(unsigned seed) {
    a = seed; 
}

int rand(void){
    int x = a;
	x ^= x << 13;
	x ^= x >> 17;
	x ^= x << 5;
	return a = x;
}

