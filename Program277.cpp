#include<iostream>
using namespace std;

class Arithmatic 
{
    public :
        double No1;
        double No2;

        Arithmatic(double A,double B)
        {
            No1 = A;
            No2 = B;
        }

        double Addition()
        {
            double Ans;
            Ans = No1 + No2;

            return Ans;
        }
        double Subtraction()
        {
            double Ans;
            Ans = No1 - No2;

            return Ans;
        }

};

int main()
{   
    Arithmatic aobj1(10.1234,11.6789);
    Arithmatic aobj2(20.5678,21.6789);

    cout<<aobj1.Addition()<<"\n";
    cout<<aobj2.Addition()<<"\n";
    
    return EXIT_SUCCESS;
}