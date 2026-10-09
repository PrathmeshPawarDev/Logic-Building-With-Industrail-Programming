#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Addition
//  Input         : Integer , Interger 
//  Outout        : Integer
//  Description   : Performs Addition
//  Date          : 04/10/2026 -> 
//  Author        : Prathmesh Sandipan  Pawar
//
//////////////////////////////////////////////////////////////////////////////////////////////





int Addition(
                int iNo1, //First Number
                int iNo2  //Second Number
            )
{

    int iAns = 0;
    
    iAns = iNo1 + iNo2;  // bussiness Logic 

    return iAns;
 
}


//////////////////////////////////////////////////////////////////////////////////////////////
//
// Entry Point of the application 
//
//////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0 ;

    printf("Enter First Number : \n");
    if(scanf("%d",&iValue1) != 1)
    {
        fprintf(stderr,"unable to proceed as Invalid Input ");

        return EXIT_FAILURE;
    }

    printf("Enter Second  Number : \n");
    if(scanf("%d",&iValue2) != 1)
    {
        fprintf(stderr,"unable to proceed as Invalid Input ");

        return EXIT_FAILURE;
    }

    iResult = Addition(iValue1,iValue2); 

    printf("The Addition is :%d \n",iResult);

    return EXIT_SUCCESS;
}


//////////////////////////////////////////////////////////////////////////////////////////////
//   
// step5 : test the program 
//
//       Tested test cases
//
//       Input1     Input2     Output
//       10         11          21
//       11         0           11
//       0          11          11
//       20         -9          11
//      -9          20         -31
//
//////////////////////////////////////////////////////////////////////////////////////////////
