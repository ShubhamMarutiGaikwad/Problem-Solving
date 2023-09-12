/*
Q: Write a java program which accept array from user and replace array element with its addition of digit
Input: b N e B R b A i O G I

OutPut: 6
*/
import java.util.*;

class MyArray
{   
    public int ArrayCap(char Arr[])
    {   
        int iCnt=0;
        int CountCap=0;
    
        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {  
            if((Arr[iCnt]>='A')&&(Arr[iCnt]<='Z'))
            {
                CountCap++;
            }                             
        }
        return CountCap;
    }
}

class Assignment46_Q4
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
        iRet=mobj.ArrayCap(Arr);

        System.out.println("Number of capital character are : "+iRet);

     sobj.close();
    }
   
}