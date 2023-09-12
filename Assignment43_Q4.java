/*
Q: Write a java program which accept two array from user and copy the element of
 array into another array and return new array
Input Array 1: 1 2 3 4
Input Array 2: 5 6 7 8 9 10

Output : 10 9 8 7 6 5 4 3 2 1 


*/
import java.util.*;

class MyArray
{   
   
    public int [] CopyArray(int Arr1[],int Arr2[])
    {
        int iCnt=0;
        //Allocating memory for reverse and combine array
        int ArrCombine[] = new int[Arr1.length+Arr2.length];
    
        int i,j=0;
        int k=ArrCombine.length-1;
        
        // Copying first array into combine array
        for(i=0;i<Arr1.length;i++)
        {
            ArrCombine[i]=Arr1[i];
        }
        // Copying second array into combine array
        for(j=Arr2.length-1;j>=0;j--)
        {
            ArrCombine[k]=Arr2[j];
            k--;
        }
   
        return ArrCombine;
    }
}

class Assignment43_Q4
{   
    public static void main(String arg[])
    {
        
        int Arr[];
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

        Arr=mobj.CopyArray(Array1,Array2);

        System.out.println("Element of combine array: ");

        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }

        sobj.close();
    }
   
}