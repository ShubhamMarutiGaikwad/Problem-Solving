/*

Que:Accept String from user and check whether it contain vowels or not
Input:Marvellous
Output:True

Input:XYZ
Output:False

 */


import java.util.*;

class StringDemo
{
    public boolean chkVowel(String str)
  { 
    char VArr[]={'a','e','i','o','u','A','E','I','O','U'};
    
    char Arr[]= str.toCharArray();
    int iCount=0;

    for(int iCnt=0;iCnt<Arr.length;iCnt++)
    {
       for(int i=0;i<VArr.length;i++)
       {
        if((Arr[iCnt]==VArr[i]))
        { 
          iCount++;
          break;
        }
       }
    }  
    if(iCount>0)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
}

class Assignment33_Q4
{
  public static void main(String arg[])
  {
    Scanner sobj=new Scanner(System.in);

    System.out.println("Enter the string:");
    String name = sobj.nextLine();

    StringDemo obj = new StringDemo();
    
    boolean bRet=obj.chkVowel(name);


    if(bRet==true)
    {
      System.out.println("String contain vowels in it");
    }
    else
    {
      System.out.println("String does not contain any vowel in it");
    }
  }
}

/* 
cyclomatic complexity = 
1. If both for loop counter have same travel = N*M
2. If both for loop counter does not have same travel = N^2
*/


