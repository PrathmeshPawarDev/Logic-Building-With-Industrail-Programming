/*
    iRows = 4
    iCols = 4

   #    *   *   *
   $    #   *   *
   $    $   #   *
   $    $   $   #

*/

#include <stdio.h>
#include <stdlib.h>

void pattern(int iRows,int iCols)
{
    int i = 0,j = 0;

    if(iRows != iCols)
    {
        printf("Invalid Input ...");
        return;
    }

    for(i = 1;i <= iRows;i++)
    {
        
        for (j = 1; j <= iCols; j++)
        {
            
            if(i == j)//daigonal 
            {
                printf("#\t");
            }
            else if(i>j)//lower triangle
            {
                printf("$\t",j);
            }
            else
            {
                printf("*\t",j);
            }
           
        }

        printf("\n\n");
    }
    

}

int main()
{
    int iValue1 = 0,iValue2 = 0;
    printf("Enter Number of Rows :\n");
    scanf("%d",&iValue1);

    printf("Enter Number of Column :\n");
    scanf("%d",&iValue2);

    pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}