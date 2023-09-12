/*
Q: Write a java program which accept marks of N student from user and display class of each student
Less than 35 - Fail
Less than 50 - Pass class
Less than 60 - Second class
Less than 70 - First class
Greater than 70 - First class with Distinction

Input: 67.3 48.8 88.9 77.5 55.2

OutPut: 67.3    First class
        45.8    Pass class
        88.9    First class with Distinction
        77.5    First class with Distinction
        55.2    Second class 
*/
import java.util.*;

class MyArray
{   
    public void Percentage(float Arr[])
    {   
        int iCnt=0;
 
        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {  
            if((Arr[iCnt]>=0)&&(Arr[iCnt]<35))
            {
                System.out.println(Arr[iCnt]+"  "+"Fail");
            }
            else if((Arr[iCnt]>=35)&&(Arr[iCnt]<50))
            {
                System.out.println(Arr[iCnt]+"  "+"Pass class");
            }
            else if((Arr[iCnt]>=50)&&(Arr[iCnt]<60))
            {
                System.out.println(Arr[iCnt]+"  "+"Second class");
            }    
            else if((Arr[iCnt]>=60)&&(Arr[iCnt]<70))
            {
                System.out.println(Arr[iCnt]+"  "+"First class");
            }
            else if((Arr[iCnt]>=70)&&(Arr[iCnt]<=100))
            {
                System.out.println(Arr[iCnt]+"  "+"First class with Distinction");
            }
            else
            {
                System.out.println("Invalid marks");
            }                        
        }
        
    }
}

class Assignment46_Q5
{   
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iCnt=0;

        System.out.println("Enter the size of array:");
        int size=sobj.nextInt();
        
        float Arr[] = new float[size];
 
        System.out.println("Enter the marks:");

        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            Arr[iCnt]=sobj.nextFloat();
        }

        MyArray mobj = new MyArray();
        mobj.Percentage(Arr);

     sobj.close();
    }
   
}