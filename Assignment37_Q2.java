/*
Que:Accept 2 string from user and check whether both are equal or not

 INPUT:"Marvellous Infosystems"
       "Marvellous Infosystems"
        
 OUTPUT:True                 

 */  

import java.util.*;

class StringDemo
{
  public boolean StrNCmpX(String src, String dest)
  { 
    boolean bRet=false;
    int iCount=0;

    char srcChar[]=src.toCharArray();
    char destChar[]=dest.toCharArray();
    
    if(srcChar.length!=destChar.length)
    { 
      System.out.println("String are not same");
      return false;
    }

    for(int iCnt=0;iCnt<srcChar.length;iCnt++)
    {
       if((srcChar[iCnt])==(destChar[iCnt]))
       {
          iCount++;
       }
       else
       {
          break;
       }
    }
    
    if(iCount==srcChar.length)
    {
      return true;
    }
    else
    {
      return false;
    } 
  }
}

class Assignment37_Q2
{
  public static void main(String Arg[])
  { 
    boolean bRet=false;
    Scanner sobj=new Scanner(System.in);

    System.out.println("Enter first string:");
    String Str1=sobj.nextLine();

    System.out.println("Enter second string:");
    String Str2=sobj.nextLine();

    StringDemo obj=new StringDemo();
    bRet=obj.StrNCmpX(Str1,Str2);

    if(bRet==true)
    {
      System.out.println("Both string are same");
    }
    else
    {
      System.out.println("strings are not same");
    }

  sobj.close();
  }
}








