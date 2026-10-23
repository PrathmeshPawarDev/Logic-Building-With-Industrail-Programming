#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bflag = false;

    for(iCnt =2,bflag= true;iCnt<=iNo/2;iCnt++)
    {
      
       if((iNo % iCnt )==0)
       {
             bflag= false;
             break;
       }
      
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

    if(bret  )
    {
       printf("It is prime number \n");
    }
    else
    {
         printf("It is not prime number \n");
    }

}