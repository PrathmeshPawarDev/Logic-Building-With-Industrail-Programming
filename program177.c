#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPalindrome(int iNo)
{

    int iDigit = 0, iRev = 0, iOriginal = 0;
    iOriginal = iNo;
   

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;

    }

    if(iOriginal == iRev)
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

    int iValue = 0;
    bool bRet = false;

    printf("Enter Number :");
    scanf("%d",&iValue);

    bRet = CheckPalindrome(iValue);

    if(bRet == true)
    {
        printf("Number is palindrome \n");
    }
    else
    {
        printf("Number is not palindrome \n");
    }

    return EXIT_SUCCESS;
}