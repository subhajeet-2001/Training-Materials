#include<stdio.h>
#include<stdlib.h>

int factorial(number) {

    int i, sum = 1;
    for (i = 1; i <= number; i++) {
        sum = sum * i;
        

    }
    printf("The factorial of the number is %d\n", sum);
    return 0;
}

int main() {

    int number_enter;
    printf("Please enter a number to find factorial: \n");
    scanf_s("%d", &number_enter);
    factorial(number_enter);
}
