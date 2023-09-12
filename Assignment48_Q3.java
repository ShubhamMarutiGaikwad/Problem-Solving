/*
Accept number of row and column from user and create one matrix by accepting values from user and reverse the content of each column

Input: 3   2   5   9
       4   3   2   2
       8   4   1   5
       3   9   7   5

Output:3    9   7   5
       8    4   1   5
       4    3   2   2
       3    2   5   9
       
*/

import java.util.*;

class Matrix
{
    public void ReverseCol(int Arr[][],int iRow,int iCol)
    {

        for(int k=0;k<iCol;k++)
        {
           int i=0;
           int j=Arr.length-1;
           int temp=0;

           while(i<j)
           {
               temp=Arr[i][k];
               Arr[i][k]=Arr[j][k];
               Arr[j][k]=temp;
               i++;
               j--;
           }
        }

       System.out.println("reversed column element of matrix");

       for(int i=0;i<Arr.length;i++)
       {
         for(int j=0;j<Arr[i].length;j++)
         {
            System.out.print(Arr[i][j]+"\t");
         }
         System.out.println();
       }
 
    }
}


class Assignment48_Q3
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

        mobj.ReverseCol(Arr,Row,Col);

        sobj.close();    
    }
}