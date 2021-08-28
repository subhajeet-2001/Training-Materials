#include<stdio.h>
#include<stdlib.h>
int main() {


	unsigned int k, l, m;
	k = 0x6;
	l = k << 4;
	m = k >> 3;

	printf("The value inside k is %d\n, l is %d\n m is %d\n", k, l, m);
	return 0;

}
