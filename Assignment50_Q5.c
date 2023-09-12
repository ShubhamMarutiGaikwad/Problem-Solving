/*
Write application which accept file name from user and one string and write that strig at the end of the file

Input: Demo.txt  "Hello World"

Output:Imdia is my country HEllo World
/*



*/

#include<stdio.h>
#include<fcntl.h>   
#include<unistd.h>  
#include<stdlib.h>  
#include<string.h>

int main()
{   
    
    int fd=0;   
    char Fname[30]; 
    int iRet=0;
    char Arr[50]={'\0'};

    printf("Enter the file name you want to open\n");
    scanf("%s",Fname);

    fd=open(Fname,O_RDWR); 

    if(fd==-1)
    {
        printf("Unable to open the file \n");
        return -1;  
    }
    
    iRet=read(fd,Arr,sizeof(Arr));  

    printf("File size is %d bytes\n",iRet);

    close(fd);
    
    return 0;
}
