// This program was created by Andrew Friedman 4/11/15 at 7:55pm
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    {
        printf("How tall should the Mario half-pyramid be? \n");    // Asks for Int
        printf("Choose a number between 1 and 23! \n");
        printf("Int:");
        h = GetInt();    // Grabs Int
    }
    
       /* Below checks if Int is not between 1 and 23
       if it isnt it runs the code in bracket to ask for user to fix Int */
    if (h < 0 || h > 23)
    {
        do
        {
            printf("Retry:");
            h = GetInt();
        } 
        while (h < 0 || h > 23); 
       
        /* Below is where it actually prints the Int */
    } 
    else if (h > 0 || h < 23)
    {
        for(int i = 0; i < h; i++) 
	    {
		        // Print spaces to make the triangle look like a triangle
            for(int j = 0; j < h-i-1; j++)
            {
                printf("%s", " ");
            }
                // Print the '#' character for the pyramid on left
		    for(int k = 0; k < i+2; k++)
		    {
			    printf("#");
		    }
		        //prints space
		    printf("  ");
		    
		    for(int k = 0; k < i+2; k++)
		        //prints for right side   
		    {
			    printf("#");
		    }
		        //ends printout
		    printf("\n");
	    }	
	    return 0;
    }
}
