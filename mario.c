#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height > 8);
    for(int i = 0; i < height; i++) // This is for row.
    {
        for(int j = height - i; j >1; j--)//This is for column
        {
             printf(" ");
        }
        for(int k = 0; k <= i; k++) // For the Right to Left "#"
        {
            printf("#");
        }
         printf("  ");
         
         for(int l = 0; l <= i; l++)//For the Left to Right ""
         {
              printf("#");
         }
            printf("\n");

    }
    
         return 0;  

}  