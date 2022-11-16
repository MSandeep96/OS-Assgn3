// Generates a random number between 1 and 32767

unsigned RANDOM_MAX = 32768;

unsigned a = 1;

void srand(unsigned seed)
{
	a = seed;
}

int rand(void)
{
	a = a * 1103515245 + 12345;
	return (unsigned int)(a/65536) % RANDOM_MAX;
}