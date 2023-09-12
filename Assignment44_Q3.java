/*
Q: Write a java program which accept array of character from user and accept one character. Return occurance of that character without considering case

Input: b N e B R b A i G B
Output:4

*/
import java.util.*;

class MyArray
{   
    public int Search(char Arr[],char ch)
    {   
        int iCnt=0;
        int Count=0;
        char chX='\0';

        if((ch>='A')&&(ch<='Z'))
        {
            chX=(char)(ch+32);
        }
        else if((ch>='a')&&(ch<='z'))
        {
            chX=(char)(ch-32);
        }


        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {  
            if((Arr[iCnt]==(ch))||(Arr[iCnt]==(chX)))
            {
                Count++;
            }          
        }
        return Count;
    }
}

class Assignment44_Q3
{   
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iCnt=0;
        int iRet=0;
        
        System.out.println("Enter the size of array:");
        int size=sobj.nextInt();

        char Arr[] = new char[size];
        
        char Character;

        System.out.println("Enter the characters:");

        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            Arr[iCnt]=sobj.next().charAt(0);
        }
        System.out.println("Enter the character you want to search:");
        Character=sobj.next().charAt(0);

        MyArray mobj = new MyArray();
        iRet=mobj.Search(Arr,Character);

        System.out.println(Character+" occured for "+iRet+" times");


     sobj.close();
    }
   
}