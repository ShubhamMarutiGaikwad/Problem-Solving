/*
Q: Write a java program which accept two array from user and display summation of each array
Input Array 1: 2 9 7 5 2 3
Input Array 2: 9 3 5 5

Output of Array 1:28
Output of Array 2:22
*/
import java.util.*;

class MyArray
{   
   
    public void SumArray(int Arr1[],int Arr2[])
    {
        int iCnt=0;
        int SumArray1=0,SumArray2=0;

        for(iCnt=0;iCnt<Arr1.length;iCnt++)
        {
           SumArray1=SumArray1+Arr1[iCnt];
        }
        
        System.out.print("odd element of second array:");
        for(iCnt=0;iCnt<Arr2.length;iCnt++)
        {
           SumArray2=SumArray2+Arr2[iCnt];
        }

        System.out.println("Summation of element of first array:"+SumArray1);
        System.out.println("Summation of element of second array:"+SumArray2);
    }
}

class Assignment42_Q5
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

    mobj.SumArray(Array1,Array2);
    }
   
}