#include <cs50.h>
#include <stdio.h>
 
int main(void)
{
    long long x;
    int count = 0;
        
    printf("Number: ");
    x = GetLongLong();
    
    {
        x /= 10;
        count++;
    }
    
    if (count < 13 || count > 16)
    {    
        printf("INVALID\n");
    } else
    {  
          int even = 0;
          int odd = 0;
          int i;
          for (i = 0; i < count; i++)
          {
              if (i % 2 == 0)
                {
                    even += (x % 10);
                    x /= 10;
                } else if ((i % 2) != 0)
                {
                    if ((x % 10) <= 4)
                    {
                        odd += ((x % 10) * 2);
                        x /= 10;
                    } else if ((x % 10) > 4)
                    {
                        int bigdigit = 0;
                        int y = ((x % 10) * 2);
                        for (int j = 0; j < 2; j++)
                        {
                            bigdigit += (y % 10);
                            y /= 10;
                        }
                        odd += bigdigit;
                        x /= 10;
                    }
                }
            }
            int total = (even + odd);
            printf("%d\n", total);
            if ((total % 10 == 0) && (count == 15))
            {
                printf("AMEX\n");
            } else if ((total % 10 == 0) && (count == 16))
            {
                if (4000000000000000 <= x && x <= 4999999999999999)
                {
                    printf("VISA\n");
                } else if (x >= 5100000000000000)
                {
                    printf("MASTERCARD\n");
                }
            } 
        printf("%d\n", even);
        printf("%d\n", odd);
        }
        return 0;
        } 
