#include<iostream>
using namespace std;

int main()
{   
    int iValue1 =  0 ,iValue2 = 0;
    int iRet = 0;

    cout<<"Enter 1st Number\n";
    cin>>iValue1;

    cout<<"Enter 2st Number\n";
    cin>>iValue2;

    iRet = iValue1 + iValue2;

    cout<<"Addition is :"<<iRet<<"\n";



    return EXIT_SUCCESS;
}