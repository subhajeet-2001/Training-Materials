#include<stdio.h>

int main() {
	int a = 78;
	int b = 89;
	if (a > b) {
		goto label1;
	}
	if (a < b) {
		goto label2;
	}
	if (a == b) {
		goto label3;
	}

label1:
	puts("A is greater than B");
	return main;

label2:
	puts("B is greater than A");
	return main;

label3:
	puts("A is equal to B");
	return main;
}
