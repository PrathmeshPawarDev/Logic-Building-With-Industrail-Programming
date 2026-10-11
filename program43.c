#include<stdio.h>
#include<stdlib.h>

int Minimum(int iNo1,int iNo2)
{
    if(iNo1 < iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }
}
int main()
{
    int iValue1 = 0 ,iValue2 = 0, iRusult = 0;

    printf("Enter First Number :\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number :\n");
    scanf("%d",&iValue2);

    iRusult=Minimum(iValue1,iValue2);

    printf("Minimum is %d \n",iRusult);

    return EXIT_SUCCESS;
}