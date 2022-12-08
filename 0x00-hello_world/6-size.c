#include <stdio.h>

int main(void){
	int har = sizeof(char);
	int num = sizeof(int);
	int refus = sizeof(long long int);
	int refu = sizeof(long int);
	int flo = sizeof(float);

	printf("Size of a char: %d byte(s)\n", har);
	printf("Size of an int: %d byte(s)\n", num);
	printf("Size of a long int: %d byte(s)\n", refu);
	printf("Size of a long long int: %d byte(s)\n", refus);
	printf("Size of a float: %d byte(s)\n", flo);
	return (0);
}
