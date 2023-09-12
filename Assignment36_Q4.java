/*
Que:Accept N number from user and accept Range, Display all element from that range
Input:N:6                            
Start:66    
End :90                            
Elements:85 66 3 76 93 88            
Output:85 66 76 88                                           
 */

import java.util.*;

class Number
{
  public void Display(int Arr[],int iStart,int iEnd)
  {
    int iCnt=0;

    System.out.println("Elements from ");

    for(iCnt=0;iCnt<Arr.length;iCnt++)
    {
      if((Arr[iCnt]>=iStart) && (Arr[iCnt]<=iEnd))
      {
        System.out.println(Arr[iCnt]); 
      }
    }
  }
}

class Assignment36_Q4
{
  public static void main(String Arg[])
  {
    Scanner sobj=new Scanner(System.in);

    System.out.println("Enter the number of element:");
    int iSize=sobj.nextInt();

    int iArr[]=new int[iSize];

    System.out.println("Enter the starting range:");
    int iStart=sobj.nextInt();

    System.out.println("Enter the end range:");
    int iEnd=sobj.nextInt();

    System.out.println("Enter the array element:");
    
    for(int iCnt=0;iCnt<iArr.length;iCnt++)
    {
      iArr[iCnt]=sobj.nextInt();
    }
    
    Number nobj=new Number();
    nobj.Display(iArr,iStart,iEnd);
    
    

   
   

    
  }
}








