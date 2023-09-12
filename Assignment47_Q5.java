/*
Accept number of row and column from user and create one matrix by accepting values from user and swap the respective row of the matrix
Input: 3   2   5   9
       4   3   2   2
       8   4   1   5
       3   9   7   5

Output: 4   3   2   2
        3   2   5   9        
        3   9   7   5
        8   4   1   5
*/

import java.util.*;

class Matrix
{
    public void SwapRows(int Arr[][],int iRow,int iCol)
    {
       for (int i = 0; ((i < Arr.length) &&  (i + 1 < Arr.length)); i+= 2)
       {
            // if (i + 1 < Arr.length)
            // {
            //     swapRows(arr, i, i + 1);
            // }
             int temp[]=Arr[i];
             Arr[i]=Arr[i+1];
             Arr[i+1]=temp;
       }

       System.out.println("Swapped rows of matrix");
    
       int i=0,j=0;

       for(i=0;i<Arr.length;i++)
       {
         for(j=0;j<Arr[i].length;j++)
         {
            System.out.print(Arr[i][j]+"\t");
         }
         System.out.println();
       }
 
    }
}



class Assignment47_Q5
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

        mobj.SwapRows(Arr,Row,Col);

        sobj.close();    
    }
}