/*
Accept number of row and column from user and create one matrix by accepting values from user and display transpose of the matrix
(Transpose of matrix is formed by inter changing value of row and column of matrix)
Input: 3   2   5   9
       4   3   2   2
       8   4   1   5
       3   9   7   5

Output: 3   4   8   3
        2   3   4   9
        5   2   1   7
        9   2   5   3
                
        
        
*/

import java.util.*;

class Matrix
{
    public void TransposeMatrix(int Arr[][],int iRow,int iCol)
    {
        int i=0,j=0;

        int TransposeMatrix[][] = new int[iRow][iCol];

        for(i=0;i<iRow;i++)
        {
            for(j=0;j<iCol;j++)
            {
                TransposeMatrix[j][i]=Arr[i][j];
            }
        }  
        
       System.out.println();

       for(i=0;i<TransposeMatrix.length;i++)
       {
         for(j=0;j<TransposeMatrix[i].length;j++)
         {
            System.out.print(TransposeMatrix[i][j]+"\t");
         }
         System.out.println();
       }
 
    }
}


class Assignment48_Q1
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

        mobj.TransposeMatrix(Arr,Row,Col);

        sobj.close();    
    }
}