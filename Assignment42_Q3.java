/*
Q: Write a java program which accept two array from user and display all odd element of both array
Input Array 1: 2 9 6 5 2 3
Input Array 2: 45 6 12 18 23 4

Output of Array 1:9 5 3
Output of Array 2: 45 23
*/
import java.util.*;

class MyArray
{   
   
    public void DisplayOdd(int Arr1[],int Arr2[])
    {
        int iCnt=0;

        System.out.print("odd element of first array:");
        for(iCnt=0;iCnt<Arr1.length;iCnt++)
        {
            if(Arr1[iCnt]%2!=0)
            {
                System.out.print(Arr1[iCnt]+"\t");
            }
        }
        System.out.println();
         
        System.out.print("odd element of second array:");
        for(iCnt=0;iCnt<Arr2.length;iCnt++)
        {
           if(Arr2[iCnt]%2!=0)
           {
             System.out.print(Arr2[iCnt]+"\t");
           }
        }
    }
}

class Assignment42_Q3
{   
    public static void main(String arg[])
    {

    Scanner sobj = new Scanner(System.in);

    int iCnt=0,iSize1=0,iSize2=0;

    System.out.print("Enter size of first array: ");
    iSize1=sobj.nextInt();

    System.out.print("Enter size of second array: ");
    iSize2=sobj.nextInt();

    int Array1[] = new int[iSize1];
    int Array2[] = new int[iSize2];

    System.out.println("Enter element of first array: ");
    for(iCnt=0;iCnt<Array1.length;iCnt++)
        {
            Array1[iCnt]=sobj.nextInt();
        }

    System.out.println("Enter element of second array: ");
    for(iCnt=0;iCnt<Array2.length;iCnt++)
        {
           Array2[iCnt]=sobj.nextInt();
        }

    MyArray mobj = new MyArray();

    mobj.DisplayOdd(Array1,Array2);
    }
   
}