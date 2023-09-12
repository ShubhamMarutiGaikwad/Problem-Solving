/*
Accept number of row and column from user and create one matrix and return addition of diagonal element of matrix
Input: 3   2   5   9
       4   3   2   2
       8   4   1   5
       3   9   7   5

Output: 12
 */

import java.util.*;

class Matrix
{
    public int AddDiagonal(int Arr[][],int iRow,int iCol)
    {
       int i=0, j=0;

       int Sum=0;

       for(i=0;i<iRow;i++)
       {
            for(j=0;j<Arr[i].length;j++)
            {
                if(i==j)
                {
                    Sum=Sum+Arr[i][j];
                }
            }
       }

       return Sum;
    }
}

class Assignment47_Q1
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

        Matrix mobj = new Matrix();

        int iRet=mobj.AddDiagonal(Arr,Row,Col);

        System.out.println("Addition of diagonal element is: "+iRet);
    }
}