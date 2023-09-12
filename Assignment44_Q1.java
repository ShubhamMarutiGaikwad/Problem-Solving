/*
Q: Write a java program which accept array of character and replace capital 
character with its corrosponding small character

Input: b N j B R b A d G G
Output:b n j b r b a d g g

*/
import java.util.*;

class MyArray
{   
    public void ArrayReplace(char Arr[])
    {   
        int iCnt=0;

        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            if((Arr[iCnt]>='A')&&(Arr[iCnt]<='Z'))
            {
                Arr[iCnt]=(char)(Arr[iCnt]+32);
            }
        }
         System.out.println("Lowercase element");
         for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
           System.out.print(Arr[iCnt]+"\t");
        }
    }
}

class Assignment44_Q1
{   
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iCnt=0;
        System.out.println("Enter the size of array:");
        int size=sobj.nextInt();

        char Arr[] = new char[size];

        System.out.println("Enter the characters:");

        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            Arr[iCnt]=sobj.next().charAt(0);
        }

        MyArray mobj = new MyArray();
        mobj.ArrayReplace(Arr);

     sobj.close();
    }
   
}