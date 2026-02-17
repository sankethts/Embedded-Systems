//waf to factorial of the number

#include<stdio.h>

void fact(int num)
{
    int fact=1, i=1;
    while(i<=num)
    {
        fact=fact*i;
        i++;
    }
    printf("Factorial of %d is: %d\n", num, fact);
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    fact(num);
}