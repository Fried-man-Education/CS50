#include <cs50.h>
#include <stdio.h>
long long b = 0;
int main(void)
{   
    printf("Enter your credit card number \n");
    printf("Number:");
    long long n = GetInt();
    b = (n % 10);
    printf("You choose %lld and it popped out %lld \n", n, b);
}
