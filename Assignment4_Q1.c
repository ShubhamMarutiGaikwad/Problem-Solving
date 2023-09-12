//Program which accept name from user and print the same

#include<stdio.h>

////////////////////////////////////////////////////////////
// 
// Function name:   NA
// Input:           String
// Output:          String
// Description :    Display string given by the user
// Author:          Shubham Maruti Gaikwad
// Date:            06/05/2023
//
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
// Time complexity of this program is N
////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////
// Entry point function
////////////////////////////////////////////////////////////


#include <stdio.h>

int main() {
    char Name[30];

    printf("Please enter full name: ");
    fgets(Name, 30, stdin);      // Referenced from chatgpt

    printf("Your name is: %s", Name);

    return 0;
}

/*
The fgets function expects the first argument to be a 
buffer to store the input string, and the second argument to be the maximum
 number of characters to read, including the terminating null character. However, 
 in your code, you have swapped the arguments,
 passing the format string as the first argument and the buffer as the second argument.

*/

/*
fgets is a function in the C standard library that reads a line of input from a file or stream,
 and stores it in a buffer. It's commonly used to read input from the keyboard or a text file.*/