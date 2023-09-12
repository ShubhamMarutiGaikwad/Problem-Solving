/*
Accept number of row and column from user and create one matrix by accepting values from user and accept
display the element addition of all column
Input: 3   2   5   9
       4   3   2   2
       8   4   1   5
       3   9   7   5
Output:18  18  15  21 
*/

import java.util.*;

class Matrix
{
    public void AddColumn(int Arr[][],int iRow,int iCol)
    {
       int i=0, j=0, k=0;

       int Sum=0;
       
       for(k=0;k<iCol;k++)
       {
            for(i=0,j=k; i<iRow; i++)
            {
                Sum=Sum+Arr[i][j];
            }

            System.out.println("Addition of "+(k+1)+" column is : "+Sum);

            Sum=0;
       }   
    }
}



class Assignment47_Q4
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

        mobj.AddColumn(Arr,Row,Col);
       
        
    }
}