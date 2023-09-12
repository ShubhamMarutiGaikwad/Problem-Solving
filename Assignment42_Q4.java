/*
Q: Write a java program which accept two array from user and concate both array
Input Array 1: 12 57 28 3
Input Array 2: 99 23 54 58 6 67

Output of Array 1:12 57 28 3 99 23 54 58 6 67

*/
import java.util.*;

class MyArray
{   
    public int [] ArrayConcate(int Arr1[],int Arr2[])
    {
       int ArrayX[] =new int[Arr1.length+Arr2.length];

      int i=0,j=0;
      int k=ArrayX.length-1;
        for(i=0;i<Arr1.length;i++)
        {
            ArrayX[i]=Arr1[i];
        }
        for(j=Arr2.length-1;j>=0;j--)
        {
            ArrayX[k]=Arr2[j];
            k--;
        }
      return ArrayX; 
    }       
}

class Assignment42_Q4
{   
    public static void main(String arg[])
    {

        Scanner sobj = new Scanner(System.in);

        int iCnt=0,iSize1=0,iSize2=0;
        int iRet[];

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
        
        System.out.println("array 1 length"+Array1.length);
        System.out.println("array 1 length"+Array2.length);

        MyArray mobj = new MyArray();

         iRet=mobj.ArrayConcate(Array1,Array2);
        
        System.out.println("Element of concated array: ");
            for(iCnt=0;iCnt<iRet.length;iCnt++)
            {
                System.out.print(iRet[iCnt]+"\t");
            }
    }  
}
