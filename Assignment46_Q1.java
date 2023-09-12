/*
Q: Write a java program which accept array from user and reverse array element at same position
Input: 89 687 56 549 87 9

OutPut: 98 786 65 945 78 9
*/
import java.util.*;

class MyArray
{
    public void ReverseArray(int Arr[])
    {
        int iCnt=0;
        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {   
            int Remainder=0;
            int Reverse=0;

            while(Arr[iCnt]!=0)
            {
               Remainder=Arr[iCnt]%10;
               Reverse=(Reverse*10)+Remainder;
               Arr[iCnt]=Arr[iCnt]/10;
            }
            Arr[iCnt]=Reverse;
        }
        
        System.out.print("Reverse element of array: ");
        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }
    }
}
class Assignment46_Q1
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
        mobj.ReverseArray(Arr);

       sobj.close();
    }
   
}