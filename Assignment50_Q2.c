/*
Write application which accept file name from user and create that file

Input: Demo.txt

Output:File opened sucessfully
/*

/*
->Create new file

int create(char *File_name, int Permission)

File_Name : Name of the file you want to open 
Permission: Permission for new file(0777)

Return valie: On sucess it return >=0
on failure it returns -1

*/

#include<stdio.h>
#include<fcntl.h>   
#include<unistd.h>  
#include<stdlib.h> 

int main()
{   
    // 1: Opening file
    int fd=0;   //fd- File Descripter
    char Fname[30];   // to accept file name from user
     
    printf("Enter the file name you want to create\n");
    scanf("%s",Fname);

    fd=creat(Fname,0777);  // Creation of file

    if(fd==-1)
    {
        printf("Unable to create the file \n");
        return -1;  // If file not open then exit from here 
    }
    else
    {
        printf("File is sucessfully created\n");
    }

    return 0;
}
