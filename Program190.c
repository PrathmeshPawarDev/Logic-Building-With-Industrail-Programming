/*
    intput :    4
    output :    -4   -3   -2   -1   -0     1    2   3   4

*/


#include<stdio.h>
#include<stdlib.h>


void pattern(int iNo)
{
    int iCnt = 0 ;
   

    for(iCnt = -iNo ;iCnt <= 0 ;iCnt++)//   O(n)
    {
        printf("%d\t",iCnt);
    }
    for(iCnt = 1 ;iCnt <= iNo ;iCnt++)//   O(n)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}//time Complexity = O(2n)
int main()
{
    int iValue = 0 ;
    printf("Enter a number :");
    scanf("%d",&iValue);

    pattern(iValue);

    return EXIT_SUCCESS;
}