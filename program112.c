#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;

    for(iCnt =2;iCnt<=iNo/2;iCnt++)
    {
       break;
      
    }

    if(iCnt == (iNo/2)+1)
    {
        return true;
    }else
    {
        return false;
    }


}


int main(void)
{
    int iValue = 0;
   int  bret= false;


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