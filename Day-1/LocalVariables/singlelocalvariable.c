#include<stdio.h>
#include<stdlib.h>

int print() {
	int q = 0xaa;
	printf("%x\n", q);
}
int main() {

	print();
	
	return 0;

}
