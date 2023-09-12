/*
Accept number of row and column from user and create one matrix by accepting values from user and check whether matrix is sparse matrix or not
(A sparse matrix is a special case of a matrix in which the number of zero elements is much higher than the number of non-zero elements.)

Input: 3    0   5   0
       0    1   0   0
       4    0   1   9
       0    5   0   0

Output:True
       
*/

import java.util.*;

class Matrix
{
    public boolean ChkSparse(int Arr[][],int iRow,int iCol)
    {

       int i=0;
       int j=0;
       int CountZero=0;
       int CountNonZero=0;
       int TotalElement=iRow*iCol;

       for(i=0;i<iRow;i++)
       {
        for(j=0;j<Arr[i].length;j++)
        {
            if((Arr[i][j]==0))
            {
                CountZero++;
            }
            else
            {
                CountNonZero++;
            }
        }      
       }
       if(CountZero>CountNonZero)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}


class Assignment48_Q5
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
        
       System.out.println("Matrix is: ");     

       for(i=0;i<Arr.length;i++)
       {
         for(j=0;j<Arr[i].length;j++)
         {
            System.out.print(Arr[i][j]+"\t");
         }
         System.out.println();
       }
       System.out.println();

        Matrix mobj = new Matrix();

        boolean bRet=mobj.ChkSparse(Arr,Row,Col);

        if(bRet==true)
        {
             System.out.println("Matrix is sparse matrix");
        }
        else
        {
             System.out.println("Matrix is not a sparse matrix");
        }

        sobj.close();    
    }
}