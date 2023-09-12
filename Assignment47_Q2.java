/*
Accept number of row and column from user and create one matrix by accepting values from user and accept
one number and return the frequency of that number.

Input: 3   2   5   9
       4   3   2   2
       8   4   1   5
       3   9   7   5
Input No: 9

Output: 2
 */

import java.util.*;

class Matrix
{
    public int ChkFrequency(int Arr[][],int iRow,int iCol,int iNo)
    {
       int i=0, j=0;

       int Count=0;

       for(i=0;i<iRow;i++)
       {
            for(j=0;j<Arr[i].length;j++)
            {
                if(Arr[i][j]==iNo)
                {
                    Count++;
                }
            }
       }
       return Count;
    }
}

class Assignment47_Q2
{
    public static void main(String arg[])
    {
        Scanner sobj =  new Scanner(System.in);

        System.out.println("Enter number of row: ");
        int Row=sobj.nextInt();

        System.out.println("Enter number of column: ");
        int Col=sobj.nextInt();

        int Arr[][] = new int[Row][Col];

        System.out.println("Enter matrix element");

        int i=0, j=0;

        for(i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                Arr[i][j]=sobj.nextInt();
            }
        }
        
        System.out.println("Enter number you want to search :");
        int No=sobj.nextInt();

        Matrix mobj = new Matrix();

        int iRet=mobj.ChkFrequency(Arr,Row,Col,No);

        System.out.println("Frequency of "+No+" is :"+iRet);
    }
}