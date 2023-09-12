/*
Q: Write a java program which accept two array from user and display all content of both array
Input Array 1: 2 9 7 5 2 3
Input Array 2: 9 3 5 5

Output of Array 1: 2 9 7 5 2 3
Output of Array 2: 9 3 5 5
*/
import java.util.*;

class MyArray
{   
   
    public void Display(int Arr1[],int Arr2[])
    {
        int iCnt=0;

        System.out.print("Element of first array: ");
        for(iCnt=0;iCnt<Arr1.length;iCnt++)
        {
            System.out.print(Arr1[iCnt]+"\t");
        }
        System.out.println();
         
        System.out.print("Element of second array: ");
        for(iCnt=0;iCnt<Arr2.length;iCnt++)
        {
            System.out.print(Arr2[iCnt]+"\t");
        }
    }
}

class Assignment42_Q1
{   
    public static void main(String arg[])
    {

    Scanner sobj = new Scanner(System.in);

    int iCnt=0,iSize1=0,iSize2=0;

    System.out.print("Element of size of first array: ");
    iSize1=sobj.nextInt();

    System.out.print("Element of size of second array: ");
    iSize2=sobj.nextInt();

    int Array1[] = new int[iSize1];
    int Array2[] = new int[iSize2];

    System.out.println("Element of element of first array: ");
    for(iCnt=0;iCnt<Array1.length;iCnt++)
        {
            Array1[iCnt]=sobj.nextInt();
        }

    System.out.println("Element of element of second array: ");
    for(iCnt=0;iCnt<Array2.length;iCnt++)
        {
           Array2[iCnt]=sobj.nextInt();
        }

    MyArray mobj = new MyArray();

    mobj.Display(Array1,Array2);
    }
   
}