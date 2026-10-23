#include<stdio.h>
#include<stdlib.h>


void CheckDivisible(int iNo)
{
    if( (iNo % 5) == 0)
    {
        printf("%d is Divisible By 5 \n",iNo);
    }
    else{
        printf("%d is Not Divisible By 5 \n",iNo);
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