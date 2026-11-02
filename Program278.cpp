#include<iostream>
using namespace std;

template <class T>

class Arithmatic 
{
    public :
        T No1;
        T No2;

        Arithmatic(T A,T B)
        {
            No1 = A;
            No2 = B;
        }

        T Addition()
        {
            T Ans;
            Ans = No1 + No2;

            return Ans;
        }
        T Subtraction()
        {
            T Ans;
            Ans = No1 - No2;

            return Ans;
        }

};

int main()
{   /*
    Arithmatic aobj1(10.1234,11.6789);
    Arithmatic aobj2(20.5678,21.6789);

    cout<<aobj1.Addition()<<"\n";
    cout<<aobj2.Addition()<<"\n";

    cout<<aobj1.Subtraction()<<"\n";
    cout<<aobj2.Subtraction()<<"\n";
    */
    return EXIT_SUCCESS;
}