/*
Q: Write a java program which accept array from user and display below pattern
Input: 8 5 6 9 4 2 4 1 5 3
Output:* * * * * * * *
       * * * * *
       * * * * * *
       * * * * * * * * *
       * * * *
       * *
       * * * *
       * 
       * * * * *
       * * *
*/
import java.util.*;

class MyArray
{   
    public void Pattern(int Arr[])
    {   
        int i=0;
        int j=0;
    
        for(i=0;i<Arr.length;i++)
        {  
          for(j=1;j<=Arr[i];j++)
          {
            System.out.print("*\t");
          } 
          System.out.println();                
        }
    }
}

class Assignment44_Q5
{   
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iCnt=0;
        
        System.out.println("Enter the size of array:");
        int size=sobj.nextInt();
        
        int Arr[] = new int[size];
 
        System.out.println("Enter the numbers:");

        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            Arr[iCnt]=sobj.nextInt();
        }

        MyArray mobj = new MyArray();
        mobj.Pattern(Arr);

       sobj.close();
    }
   
}