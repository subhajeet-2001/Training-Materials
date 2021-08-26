#include<stdio.h>

int main() {
	goto unconditional;
	puts("I will never be executed");


unconditional:
	puts("I will be executed");
	return main;

}
