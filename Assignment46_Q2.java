/*
Q: Write a java program which accept array from user and replace array element with its addition of digit
Input: 89 687 56 549 87 9

OutPut: 17 21 11 18 15 9
*/
import java.util.*;

class MyArray
{
    public void SumArray(int Arr[])
    {
        int iCnt=0;
        
        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {   
            int Remainder=0;
            int Sum=0;

            while(Arr[iCnt]!=0)
            {
               Remainder=Arr[iCnt]%10;
               Sum=Sum+Remainder;
               Arr[iCnt]=Arr[iCnt]/10;
            }
            Arr[iCnt]=Sum;
        }
        
        System.out.print("Replaced element array by digit addition : ");
        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }
    }
}
class Assignment46_Q2
{   
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array:");
        int size=sobj.nextInt();

        int Arr[] = new int[size];

        System.out.println("Enter the array element:");
        
        for(int iCnt=0;iCnt<Arr.length;iCnt++)
        {
            Arr[iCnt]=sobj.nextInt();
        }

        MyArray mobj = new MyArray();
        mobj.SumArray(Arr);

       sobj.close();
    }
   
}