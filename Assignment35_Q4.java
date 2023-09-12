/*

Que:Accept number from user and return multiplication of all digit
Input:2395   Input:1018   Input:9440     Input:922432
Output:270   Output:8     Output:144     Output:864

 */


import java.util.*;

class Digits
{
  public int Multiply(int iNo)
  { 
    if(iNo<0)
    {
      iNo=-iNo;
    }

    int iDigit=0;
    int iMul=1;

    while(iNo!=0)  
    { 
      iDigit=iNo%10;
      if(iDigit==0)
      {  
        iNo=iNo/10;
        continue;
      }
      iMul=iMul*iDigit;
      iNo=iNo/10; 
    }
    return iMul;
  }
}

class Assignment35_Q4
{
  public static void main(String Arg[])
  {
     Scanner sobj=new Scanner(System.in);

     System.out.println("Enter the number");
     int iNo = sobj.nextInt();

     Digits dobj=new Digits();

     int iRet=dobj.Multiply(iNo);

     System.out.println("Multiplication of digit is :"+iRet);
  }
}

/*
The above while loop can be written as 

   while(iNo!=0)
   {
      iDigit=iNo%10;
      if(iDigit==0)
      {  
         continue;
      }
      else
      {
         iMul=iMul*iDigit;
         iNo=iNo/10;
      }    
   }  
   return iMul;

 */




