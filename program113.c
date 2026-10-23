#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bflag = true;

    for(iCnt =2;iCnt<=iNo/2;iCnt++)
    {
       bflag = false;
      
    }

    return bflag;
}


int main(void)
{
    int iValue = 0;
     bool  bret= false;


    printf("Enter a number:\n");
    scanf("%d",&iValue);

    CheckPrime(iValue);

    if(bret == true)
    {
       printf("It is prime number \n");
    }
    else
    {
         printf("It is not prime number \n");
    }

}