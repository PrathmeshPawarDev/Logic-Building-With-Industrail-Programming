/*
        -------------------------------
                Operation &&
        -------------------------------
        Result1    Result2     FINAL Result
        -------------------------------
         TRUE      TRUE         TRUE
         TRUE      FALSE        FALSE
         FALSE     TRUE         FLASE       short Circuit
         FALSE     FALSE        FALSE       Short Circuit
        -------------------------------


*/

#include<stdio.h>
#include<stdlib.h>


void CheckDivisible(int iNo)
{
    if( ((iNo % 3) == 0) && ((iNo % 5) == 0) )
    {
        printf("%d is Divisible By 3 and 5 \n",iNo);
    }
    else{
        printf("%d is Not Divisible By 3 and 5 \n",iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number :\n");
    scanf("%d",&iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}