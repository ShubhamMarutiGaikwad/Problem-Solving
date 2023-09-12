/* // ref 24 5
 WAP which accept 2 strings from user and check whether first N contents of two strings are equal or not 

 Note : If third parameter is greater than the size of second string then concat whole string after first string

 INPUT:
        "Marvellous Infosystems"
        "Marvellous Logic Building"
        10
        

 OUTPUT:First 10 contents of string are  Equal 

  INPUT:
        "Marvellous Infosystems"
        "Marvellous Logic Building"
        24
        

 OUTPUT:First 24 contents of string are not  Equal 

   INPUT:
        "Marvellous Infosystems"
        "Marvellous Logic Building"
        30 
        

 OUTPUT:Concatination of both the strings : marvellous infosystems marvellous logic building 
 */

import java.util.*;


class StringDemo
{


    public void StrNCmpX(String src, String dest,int ival)
    {
        
       
      
     
       int destlen=dest.length();

        StringBuffer stringBuffer = new StringBuffer();
      
        if(ival>destlen)
        {
                   String s1=src;
                    stringBuffer.append(s1);
                    stringBuffer.append(" ");
                    stringBuffer.append(dest);
                    src = stringBuffer.toString();
                    System.out.println("Concatination of both the strings : "+src);
                    //using string buffer class we are directly appending/joining two strings
        }
        else

        {   char s2[]=dest.toCharArray();//converting second string to char to append/attach it to the first string
            char s1[]=src.toCharArray();
             boolean bret=false;   
            for(int icnt=0;icnt<=ival;icnt++)
                {
                    if(s1[icnt]==s2[icnt])
                    {
                        bret=true;
                    }
                    else
                    {
                         bret=false;
                        break;
                    }
                  

                   
                 }
            if(bret==true)
             {
                System.out.println("First "+ival+" contents of string are Equal");
            }
            else
            { 
            System.out.println("First "+ival+" contents of string are not  Equal");
            }
        }

        
                
    }

      
}

class Assignment37_Q3
{
    public static void main(String args[])
    {
       Scanner sobj = new Scanner(System.in);
     
        System.out.println("Please enter first string");
        String str1=sobj.nextLine();
        System.out.println("Please enter second string");
        String str2=sobj.nextLine();

         System.out.println("Please enter how many contents of both the strings you want to compare :");
         int ino=sobj.nextInt();
        StringDemo strdemo=new StringDemo();
        strdemo.StrNCmpX(str1, str2, ino);
     

        sobj.close();
    }
}