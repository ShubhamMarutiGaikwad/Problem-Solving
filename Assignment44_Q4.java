/*
Q: Write a java program which accept array of character from user and return the difference between capital and small character
Input: b N e B R b A I O G i 
Output:3 (7-4)

*/
import java.util.*;

class MyArray
{   
    public int Difference(char Arr[])
    {   
        int iCnt=0;
        int CountCap=0,CountSmall=0;
    
        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {  
            if((Arr[iCnt]>='A')&&(Arr[iCnt]<='Z'))
            {
                CountCap++;
            } 
            else if((Arr[iCnt]>='a')&&(Arr[iCnt]<='z'))
            {
                CountSmall++;
            }                  
        }

        int Difference=CountCap-CountSmall;
        if(Difference<0)
        {
            Difference=-Difference;
        }

        return Difference;
    }
}

class Assignment44_Q4
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
        iRet=mobj.Difference(Arr);

        System.out.println("Difference between capital and small character is: "+iRet);


     sobj.close();
    }
   
}