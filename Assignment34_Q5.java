/*
Que:Accept N number from user and display all such element which multiple of eleven
Input:N=6
Element: 85 66 3 55 93 88
Output: 66 55 88  

 */

import java.util.*;

class ArrayDemo
{
    public void Display(int Arr[])
  { 
    for(int iCnt=0;iCnt<Arr.length;iCnt++)
    {
      if((Arr[iCnt]%11)==0)
      {
        System.out.println(Arr[iCnt]+":is multiple of 11");
      }
    }
  }    
}

class Assignment34_Q5
{
  public static void main(String arg[])
  {
    Scanner sobj=new Scanner(System.in);

    System.out.println("Enter number of element:"); // Accepting number of element from user
    int iSize=sobj.nextInt();

    int iArr[]=new int[iSize];                      // Allocating memory to array

    
    System.out.println("Enter the array element:");

    for(int iCnt=0;iCnt<iArr.length;iCnt++)
    {
       iArr[iCnt]=sobj.nextInt();
    }

    ArrayDemo aobj = new ArrayDemo();

    aobj.Display(iArr);

    

    
    

  }
}


