/*
Accept number of row and column from user and create one matrix by accepting values from user and check whether matrix is identity matrix or not
(An identity matrix is a given square matrix of any order which contains on its main diagonal 
elements with value of one, while the rest of the matrix elements are equal to zero.)

Input: 1    0   0   0
       0    1   0   0
       0    0   1   0
       0    0   0   1

Output:True
       
*/

import java.util.*;

class Matrix
{
    public boolean ChkIdentity(int Arr[][],int iRow,int iCol)
    {

       int i=0;
       int j=0;
       int CountDiagonal=0,CountElement=0;
       int TotalElement=iRow*iCol;

       for(i=0;i<iRow;i++)
       {
        for(j=0;j<Arr[i].length;j++)
        {
            if((i==j)&&(Arr[i][j]==1))
            {
                CountDiagonal++;
            }
            else if(Arr[i][j]==0)
            {
                CountElement++;
            }
        }      
       }
       if((CountDiagonal==iRow)&&(CountElement==(TotalElement-CountDiagonal)))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}


class Assignment48_Q4
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

        boolean bRet=mobj.ChkIdentity(Arr,Row,Col);

        if(bRet==true)
        {
             System.out.println("Matrix is identity matrix");
        }
        else
        {
             System.out.println("Matrix is not a identity matrix");
        }

        sobj.close();    
    }
}