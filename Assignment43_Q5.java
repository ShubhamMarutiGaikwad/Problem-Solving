/*
Q: Write a java program which accept two array from user and check whether that array and its element are palindrome or not.
Input Array : 11 252 387783 252 11 
OutPut : TRUE

Input Array : 11 252 387783 77 11
Output : FALSE

Input Array : 11 252 786 252 11
Output : FALSE

Input Array : 11 252 786 253 11
Output : FALSE


*/
import java.util.*;

class MyArray
{   
    public boolean ChkPalindrome (int Arr[])
    {
        int Count=0;
        int iCnt=0;

        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            int Reverse=0;
            int Remainder=0;
            int NoX=Arr[iCnt];
            
            while(Arr[iCnt]!=0)
            {
                Remainder=Arr[iCnt]%10;
                Reverse=(Reverse*10)+Remainder;
                Arr[iCnt]=Arr[iCnt]/10;
            }

            if(NoX!=Reverse)
            {
                break;
            }
            else
            {
                Count++;
            }
        }
        if(Count==Arr.length)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class Assignment43_Q5
{   
    public static void main(String arg[])
    {

    Scanner sobj = new Scanner(System.in);

    int iCnt=0,iSize=0;
    boolean bRet=false;

    System.out.print("Enter size of array: ");
    iSize=sobj.nextInt();

    int Array[] = new int[iSize];
 
    System.out.println("Enter element of array: ");
    for(iCnt=0;iCnt<Array.length;iCnt++)
        {
            Array[iCnt]=sobj.nextInt();
        }
    
    MyArray mobj = new MyArray();

    bRet=mobj.ChkPalindrome(Array);

    if(bRet==true)
    {
       System.out.println("All array digit are palindrome");
    }
    else
    {
        System.out.println("Array digit are not palindrome");
    }

   
    }
   
}