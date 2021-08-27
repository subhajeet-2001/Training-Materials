#include <stdio.h>

int main() {
    int a = 8;
    int c = 3;
    for (int b = 0; b < a; b++) {
        if (b % 2 == 0){
            c--;
            printf("The iterations are : %d\n", c);
        }
        else {
            printf("%d\n", b);
        }
    }
}
