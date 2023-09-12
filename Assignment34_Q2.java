/*
Que:Accept N number from user and display all such element which are divisible by 5
Input:N=6
Element: 85 66 3 80 93 88
Output: 85 80 

 */

import java.util.*;

class ArrayDemo
{
    public void Display(int Arr[])
  { 
    for(int iCnt=0;iCnt<Arr.length;iCnt++)
    {
      if((Arr[iCnt]%5)==0)
      {
        System.out.println(Arr[iCnt]+":is divisible by 5");
      }
    }
  }    
}

class Assignment34_Q2
{
  public static void main(String arg[])
  {
    Scanner sobj=new Scanner(System.in);

    System.out.println("Enter number of element:"); // Accepting number of element from user
    int iSize=sobj.nextInt();

    int iArr[]=new int[iSize];                      // Allocating memory to array

    
    System.out.println("Enter the array element:");   

    for(int iCnt=0;iCnt<iArr.length;iCnt++)    //Accepting & storing value in array
    {
       iArr[iCnt]=sobj.nextInt();
    }

    ArrayDemo aobj = new ArrayDemo();   // Object creation of Class
  
    aobj.Display(iArr);              //

    

    
    

  }
}


