#include <stdio.h>

int main() {
    int number;
    long long calculation = 1;
    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number < 0){
        printf("The factorials of negative integers have no defined meaning.");
    }
    else if(number == 0){
        printf("Factorial of %d = 1", number);
    }
    else {
        for (int x = 1; x <= number; x++) {
            calculation *= x;
        }
        printf("Factorial of %d = %d", number, calculation);
    }

    return 0;
}
