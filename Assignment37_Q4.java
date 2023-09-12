/*
Que:Accept 2 string from user and reverse the string by toggling the case
Input:aCBdef
Output:FEDbcA                 

 */  

import java.util.*;

class StringDemo
{
    public String StrRevTogX(String str)
    { 

      int iCnt=0;
     /////////////////////////////////////////////////////
      // Step 1: Toggling the string

      char Arr[]=str.toCharArray();
      
      for(iCnt=0;iCnt<Arr.length;iCnt++)
      {
        if((Arr[iCnt]>='A')&&(Arr[iCnt]<='Z'))
        {
           Arr[iCnt]=(char)(Arr[iCnt]+32);
        }
        else if((Arr[iCnt]>='a')&&(Arr[iCnt]<='z'))
        {
           Arr[iCnt]=(char)(Arr[iCnt]-32);
        }
      }
      /////////////////////////////////////////////////////
      //Reverse the string
      int iStart=0;
      int iEnd=Arr.length-1;
      char temp=' ';
      while(iStart<iEnd)
      {
        temp=Arr[iStart];
        Arr[iStart]=Arr[iEnd];
        Arr[iEnd]=temp;

        iStart++;
        iEnd--;
      }
      /////////////////////////////////////////////////////
      // Return the updated toggled and reversed string
      return new String(Arr);
      
    }
}

class Assignment37_Q4
{
  public static void main(String Arg[])
  {
    Scanner sobj=new Scanner(System.in);

    System.out.println("Enter the string:");
    String Str=sobj.nextLine();

    StringDemo obj=new StringDemo();

    String sret=obj.StrRevTogX(Str);

    System.out.println("Toggled and reversed string : "+sret);


  }
}








