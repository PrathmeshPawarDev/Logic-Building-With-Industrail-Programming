#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

void CheckPrime(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt =1;iCnt<=iNo/2;iCnt++)
    {
        iSum =iSum + iCnt;

    }

    if(iSum == 1)
    {
        printf("It is prime number \n");
    }
    else
    {
         printf("It is not prime number \n");
    }
}

int main(void)
{
    int iValue = 0;

    printf("Enter a number:\n");
    scanf("%d",&iValue);

    CheckPrime(iValue);


}