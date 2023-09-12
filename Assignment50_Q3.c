/*
Write application which accept file name from user and read all data from that file
and display contents on screen

Input: Demo.txt

Output:My name is shubham
/*

/*
->Read data from existing file

int read(int fd,char *data, int size)

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

    printf("%d bytes gets sucessfully fetched from the file \n",iRet);

    printf("data from file is : \n");
    write(1,Arr,iRet);  // 1 is for to write on screen

    close(fd);
    
    return 0;
}
