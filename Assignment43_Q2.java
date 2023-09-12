/*
Q: Write a java program which accept two array from user and display smallest element each array
Input Array 1: 2 9 7 5 2 3
Input Array 2: 9 3 5 5

Output 1: 2
Output 2: 3

*/
import java.util.*;

class MyArray
{   
   
    public void MinArray(int Arr1[],int Arr2[])
    {
        int iCnt=0;
        int MinArray1=Arr1[0],MinArray2=Arr2[0];

        for(iCnt=0;iCnt<Arr1.length;iCnt++)
        {
           if(Arr1[iCnt]<MinArray1)
           {
            MinArray1=Arr1[iCnt];
           }
        }
        
        for(iCnt=0;iCnt<Arr2.length;iCnt++)
        {
           if(Arr2[iCnt]<MinArray2)
           {
            MinArray2=Arr2[iCnt];
           }
        }
        System.out.println("Smallest element of first array: "+MinArray1);
        System.out.println("Smallest element of second array: "+MinArray2);

    }
}

class Assignment43_Q2
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

    mobj.MinArray(Array1,Array2);

   
    }
   
}