//Approach 1 

import java.util.Scanner;

class program33
{
    public static void main(String A[])
    {
        Scanner scanner = null;
        int iValue1 = 0,iValue2 = 0, iRusult = 0;

        scanner = new Scanner(System.in);

        System.out.println("Enter First Number :");
        iValue1=scanner.nextInt();

        System.out.println("Enter Second Number :");
        iValue2=scanner.nextInt();

        iRusult = iValue1 + iValue2;//Bussiness Logic 

        System.out.println("Addition is : "+iRusult);

        

        


    }
}