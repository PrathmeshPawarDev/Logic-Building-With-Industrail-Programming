#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

bool CheckPerfect(int iNo)
{
    int iCnt  = 0  ,iSum = 0;
    
    for(iCnt  = 1;iCnt <= iNo/2 ; iCnt++)
    {
        if((iNo % iCnt )== 0) 
        {
            iSum = iSum + iCnt;
        }
    }
    if(iSum == iNo)
    {
        return true;

    }else
    {
        return false;
    }
    
}


int main()
{
    int iValue = 0 ;
    bool bRet = false;

    printf("Enter a number :\n");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);

    if(bRet == true)
    {
        printf("It is Perfect Number \n");
    }
    else
    {
        printf("It is Not Perfect Number \n");
    }
    return EXIT_SUCCESS;
}


//Time complexity :  O(N/2)