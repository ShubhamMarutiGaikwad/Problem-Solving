/*
Write application which accept file name from user and display size of file

Input: Demo.txt

Output:File size is 56 bytes
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

    printf("File size is %d bytes\n",iRet);

    close(fd);
    
    return 0;
}
