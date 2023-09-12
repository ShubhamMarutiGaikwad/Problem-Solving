/*
Q: Write a java program which accept array of character and count vowels 

Input: b N e B R b A i G i
Output:4

*/
import java.util.*;

class MyArray
{   
    public int CountVowels(char Arr[])
    {   
        int iCnt1=0,iCnt2=0;
        int Count=0;
        char vowels[]={'a','A','e','E','i','I','o','O','u','U'};

        for(iCnt1=0;iCnt1<Arr.length;iCnt1++)
        {
            for(iCnt2=0;iCnt2<vowels.length;iCnt2++)
            {
                if(Arr[iCnt1]==vowels[iCnt2])
                {
                    Count++;
                }
            }
        }
        return Count;
    }
}

class Assignment44_Q2
{   
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iCnt=0;
        int iRet=0;
        
        System.out.println("Enter the size of array:");
        int size=sobj.nextInt();
        
        char Arr[] = new char[size];

        System.out.println("Enter the characters:");

        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            Arr[iCnt]=sobj.next().charAt(0);
        }

        MyArray mobj = new MyArray();
        iRet=mobj.CountVowels(Arr);

        System.out.println("Number of vowels in array are : "+iRet);


     sobj.close();
    }
   
}