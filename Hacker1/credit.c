#include <cs50.h>
#include <stdio.h>
int a = 4;
int main(void)
{   
// first questions
    printf("Enter the first 2 Digits of your credit card number \n");
    printf("Number:");
    int n = GetInt();
    int b = 0; 
    b = (n/10);
        if (n == 34 || n == 37) //American Express
        {
            printf("Enter all 15 digits of your credit card number\n");
            printf("Number:")
            int american = GetInt();
            int 2nd = 0;
            2nd = (american % 10)
        }
        else if (n == 51 || n == 52 || n == 53 || n == 54 || n == 55) //MasterCard
        {
            printf("Enter all 16 digits of your credit card number\n");
        }
        else if (b == 4) //Visa
        {
            printf("Does your credit card have 13 or 16 digits? \n"); // selects whitch kind of Visa
            printf("Number:");
            int number = GetInt();
            
                if (number == 13)
                {
                    printf("Enter all 13 digits of your credit card number \n");
                }
                else if (number == 16)
                {
                    printf("Enter all 16 digits of your credit card number \n");
                }
                else
                {
                    do //User doesnt cooperate makes them
                    {
                        printf("Does your credit card have 13 or 16 digits? \n");
                        printf("Retry:");
                        number = GetInt();
                    }
                    while (number == 14 || number == 15 || number > 16 || number < 13);
                        if (number == 13)
                        {
                            printf("Enter all 13 digits of your credit card number \n");
                        }
                        else if (number == 16)
                        {
                            printf("Enter all 16 digits of your credit card number \n");
                        }
                }
        }       
        else
        {
            printf("Something went wrong.\n");
            printf("reopen program and type in first two digits correctly. \n");
        }
}
