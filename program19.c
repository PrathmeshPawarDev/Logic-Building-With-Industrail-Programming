#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool CheckEven(int iNo )
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{

    int iValue =0 ;
    bool bret = false;
    
    printf("Enter a Number : \n");
    scanf("%d",&iValue);

    bret = CheckEven(iValue);

    if(bret == true)
    {
        printf("It is Even Number \n");
    }
    else
    {
        printf("It is Odd Number ");
    }

    return EXIT_SUCCESS;
}