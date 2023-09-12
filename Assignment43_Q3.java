/*
Q: Write a java program which accept two array from user and copy the element of
 array into another array in reverse order and return new array
Input Array 1: 1 2 3 4
Input Array 2: 5 6 7 8 9 10

Output : 10 9 8 7 6 5 4 3 2 1 


*/
import java.util.*;

class MyArray
{   
   
    public int [] CopyArrRev(int Arr1[],int Arr2[])
    {
        int iCnt=0;
        //Allocating memory for reverse and combine array
        int ArrCombine[] = new int[Arr1.length+Arr2.length];
        int ArrReverse[] = new int[ArrCombine.length];

        int i,j=0;
        int k=ArrCombine.length-1;
        int l=ArrReverse.length-1;
        
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
        //Copying value in reverse way
        for(i=0;i<ArrCombine.length;i++)
        {
           ArrReverse[l]=ArrCombine[i];
           l--;
        }
        return ArrReverse;
    }
}

class Assignment43_Q3
{   
    public static void main(String arg[])
    {
        
        int RevArr[];
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

        RevArr=mobj.CopyArrRev(Array1,Array2);

        System.out.println("Element of combine revere array: ");

        for(iCnt=0;iCnt<RevArr.length;iCnt++)
        {
            System.out.print(RevArr[iCnt]+"\t");
        }

        sobj.close();
    }
   
}