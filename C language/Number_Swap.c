
#include <stdio.h>

int main()
{   int a,b;
    printf("Enter first number:\n");
    scanf("%d", &a);
    printf("Enter 2nd number:\n");
    scanf("%d", &b);
     printf("Numbers before swapping: %d & %d \n",a,b);
     int temp=a;
     a=b;
     b=temp;
     printf("Numbers after swapping: %d & %d",a,b);
    

    return 0;
}