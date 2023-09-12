/*

Que:Accept number from user and return difference between summation of even digit & summation of odd digit
Input:2395         Input:1018        Input:8440          Input:5733
Output:-15(2-17)   Output:6(8-2)     Output:16(16-0)     Output:-18(0-18)

 */


import java.util.*;

class Digits
{
  public int CountDiff(int iNo)
  { 
    if(iNo<0)      //Updater to update negative value to positive
    {
      iNo=-iNo;
    }

    int iDigit=0;
    int SumEven=0;
    int SumOdd=0;

    while(iNo!=0)  
    { 
      iDigit=iNo%10;
    
      if((iDigit%2)==0)
      {
        SumEven=SumEven+iDigit;
      }
      else
      {
        SumOdd=SumOdd+iDigit;
      }
      iNo=iNo/10; 
    }
    return (SumEven-SumOdd);
  }
}

class Assignment35_Q5
{
  public static void main(String Arg[])
  {
     Scanner sobj=new Scanner(System.in);

     System.out.println("Enter the number");
     int iNo = sobj.nextInt();

     Digits dobj=new Digits();

     int iRet=dobj.CountDiff(iNo);

     System.out.println("Difference between Sum & Odd digit is :"+iRet);
  }
}






