/*
Que:Accept string from user and check whether string is pallindrome or not without considering its case
Input:1abccBA1
Output:TRUE                 

 */  

import java.util.*;


class StringDemo
{  
   
    public String  StrRevX(String str)
    {  
        char Arr[]=str.toCharArray();

        int iStart=0;
        int iEnd=Arr.length-1;

        char cTemp=' ';
        while(iStart<iEnd)
        {
            cTemp=Arr[iStart];
            Arr[iStart]=Arr[iEnd];
            Arr[iEnd]=cTemp;
            iStart++;
            iEnd--;
        }
        
        return new String(Arr);


    }
     public String ToLower(String str)
    {
        char brr[] = str.toCharArray();
        for(int icnt=0;icnt<brr.length;icnt++)
        {
            if((brr[icnt] >= 'A') && (brr[icnt] <= 'Z'))
            {
                brr[icnt] = (char)(brr[icnt] + 32);
            }
        }
         return new String(brr);
    }
    
public boolean StrPalindrome(String str)
{  
    String str2=StrRevX(str);
    char c1[]=str.toCharArray();
    char c2[]=str2.toCharArray();
   // boolean bret=false;
  int icount=0;
    for(int icnt=0;icnt<c1.length;icnt++)
    {
        if(c1[icnt]!=c2[icnt])
        {
         
             break;
        }
        icount++;

    }
        if((c1.length)==(icount))
    {
        return true;
    }
    else
    {
        return false;
    }
}
      
}

class Assignment37_Q5
{
    public static void main(String args[])
    {
       Scanner sobj = new Scanner(System.in);
     
        System.out.println("Please enter string");
        String str=sobj.nextLine();
        
        StringDemo strdemo=new StringDemo();
        String lower=strdemo.ToLower(str);
        boolean bstrq =strdemo.StrPalindrome(lower);
        if(bstrq==true)
        {
                    System.out.println("String is palindrome");
        }
        else
        {
            System.out.println("String is not palindrome");
        }
      
        //System.out.println(strdemo.StrRevX(str));

        sobj.close();
    }
}








