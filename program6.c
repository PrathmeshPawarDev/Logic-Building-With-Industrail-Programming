/*
step1 : Understand the problem statement 
step2 : write the an Algorithm
step3 : Deside the programing Language 
step4 : Write the program
step5 : test the program 

*/

//////////////////////////////////////////////////////////////////////////////////////////////
//
// Step 1: Understand the problem Statement
//         User is going to enter two integers 
//         and we have to perform addition 
//
//////////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////
//  
// step2 : write the an Algorithm
/*
        START
            Accept first number as NO1
            Accept second number as NO2
            Create the variable as Ans to store the result
            Perform the addition and store into Ans
            Display the result from Ans
        END
*/      
//////////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////
// 
// step3 : Deside the programing Language 
//         We select C programming 
//
//////////////////////////////////////////////////////////////////////////////////////////////




//////////////////////////////////////////////////////////////////////////////////////////////
// 
// step4 : Write the program
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Addition(int iNo1, int iNo2 )
{

    int iAns = 0;
    
    iAns = iNo1 + iNo2;    // bussiness Logic 

    return iAns;
 
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0 ;

    printf("Enter First Number : \n");
    scanf("%d",&iValue1);

    printf("Enter Second  Number : \n");
    scanf("%d",&iValue2);

    iResult = Addition(iValue1,iValue2);


    printf("The Addition is :%d \n",iResult);

    

    return 0;
}