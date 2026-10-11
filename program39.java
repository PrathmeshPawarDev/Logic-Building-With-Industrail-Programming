//Approach 3

import java.util.Scanner;


class program39
{
    
    public static void main(String A[])
    {
        Scanner scanner = null;
        int iValue1 = 0,iValue2 = 0, iRusult = 0;

        scanner = new Scanner(System.in);
        Arithematic arithematic = null;        

        System.out.println("Enter First Number :");
        iValue1=scanner.nextInt();

        System.out.println("Enter Second Number :");
        iValue2=scanner.nextInt();

        arithematic = new Arithematic();
        iRusult =arithematic.Addition(iValue1,iValue2);

        System.out.println("Addition is : "+iRusult);


    }
}

class Arithematic
{
    public int Addition(int iNo1,int iNo2)
    {
        int iAns = 0;

        iAns = iNo1 + iNo2; //Bussiness Logic 
        
        return  iAns;
    }
}
