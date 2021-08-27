#include<stdio.h>
#include<conio.h>

int main() {

    char grade = 'F';

    switch (grade) {


    case 'A': printf("You have done good!");
        break;

    case 'B': printf("You have done decent!");
        break;

    case 'C': printf("You could have done better");
        break;

    case 'F': {
        for (int i = 0; i < 3; i++) {
            printf("Omega %c LoL\n", 'F');
        }
    };
            break;

    default: printf("Nope, correct grade not entered");
        break;




    }

	return 0;
}
