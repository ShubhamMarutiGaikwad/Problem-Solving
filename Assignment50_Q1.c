/*
Write application which accept file name from user and open that file in read mode

Input: Demo.txt

Output:File opened sucessfully
/*

1: open existing file
int open(char *File_name,int Mode);

*/
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
     
    printf("Enter the file name you want to open\n");
    scanf("%s",Fname);

    fd=open(Fname,O_RDONLY);

    if(fd==-1)
    {
        printf("Unable to open the file");
        return -1;  // If file not open then exit from here 
    }
    else
    {
        printf("File is sucessfully opened with FD %d\n",fd);
    }

    //2: Close the file
    
    close(fd);

    return 0;
}
