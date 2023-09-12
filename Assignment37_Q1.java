/* // ref 24 5
 WAP which accept 2 strings from user and contact N characters of second string after first string. 
 Value of N should be accepted from user. 

 Note : If third parameter is greater than the size of second string then concat whole string after first string

 INPUT:"Marvellous Infosystems"
        "Logic building"
        5

 OUTPUT: "Marvellous Infosystems Logic"

  INPUT:"Marvellous Infosystems"
        "Logic building"
        16

 OUTPUT: "Marvellous Infosystems Logic building"
 
 */

import java.util.*;


class StringDemo
{

    public String StrNCatX(String src, String dest,int ival)
    {
        
        String s1=src;//backup of main string
      
     
       int destlen=dest.length();

        StringBuffer stringBuffer = new StringBuffer();
      
        if(ival>destlen)
        {
                   
                    stringBuffer.append(s1);
                    stringBuffer.append(" ");
                    stringBuffer.append(dest);
                    src = stringBuffer.toString();
                    
                    //using string buffer class we are directly appending/joining two strings
        }
        else
        {   char s2[]=dest.toCharArray();//converting second string to char to append/attach it to the first string
                stringBuffer.append(src);//adding first string to string buffer
                stringBuffer.append(" ");//adding spcae before adding second string
            for(int icnt=0;icnt<=ival;icnt++)
            {
                    stringBuffer.append(s2[icnt]);//attaching one character at a time to the main string
                   
            }
            src=stringBuffer.toString();//converting string from string buffer to string 

        
                
        }
         return src;
      
    }


}

class Assignment37_Q1
{
    public static void main(String args[])
    {
       Scanner sobj = new Scanner(System.in);
     
        System.out.println("Please enter first string");
        String str1=sobj.nextLine();
        System.out.println("Please enter second string");
        String str2=sobj.nextLine();

        System.out.println("Please enter how many characters of second string you want to concat");
        int ino=sobj.nextInt();
        StringDemo strdemo=new StringDemo();
        String sRet="";
        sRet=strdemo.StrNCatX(str1, str2, ino);
        System.out.println("string after concatenation is "+sRet);

        sobj.close();
    }
}