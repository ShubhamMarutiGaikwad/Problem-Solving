/*
Accept number of row and column from user and create one matrix by accepting values from user and accept
return the largest number from both the diagonal.

Input: 3   2   5   9
       4   3   2   2
       8   4   1   5
       3   9   7   5

Output: LR Diagonal - 5
        RL Diagonal - 9
*/

import java.util.*;

class Matrix
{
    public int LRMaxDiagonal(int Arr[][],int iRow,int iCol)
    {
       int i=0, j=0;

       int LRmax=0;

       for(i=0;i<iRow;i++)
       {
            for(j=0;j<Arr[i].length;j++)
            {
                if((i==j)&&(Arr[i][j]>LRmax))
                {
                    LRmax=Arr[i][j];
                }
            }
       }
       return LRmax;
    }

    public int RLMaxDiagonal(int Arr[][],int iRow,int iCol)
    {
       int i=0, j=0;

       int RLmax=0;

       for(i=iRow-1;i>=0;i--)
       {
            for(j=0;j<Arr[i].length;j++)
            {
                if((Arr[i][j]>RLmax))
                {
                    RLmax=Arr[i][j];
                }
            }
       }
       return RLmax;
    }
}

class Assignment47_Q3
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

        int iRet=mobj.LRMaxDiagonal(Arr,Row,Col);
        System.out.println("Maximum diagonal element from left to right is:"+iRet);

        iRet=mobj.RLMaxDiagonal(Arr,Row,Col);
        System.out.println("Maximum diagonal element from right to left is:"+iRet);

        
    }
}