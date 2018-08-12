//Program to print the user input to the output screen.

#include<stdio.h>
int main()
{
    int ch; //Stores the input value.
    printf("Please enter the input.\n");
    
    while((ch=getchar())!=EOF)
          putchar(ch);
          
}

/* Code feedback:

-> The reason why 'ch' is declared as 'int' is, when the End of the File is reached, 'getchar' returns 
    an integer value which can be greater than 255, EOF values can be different on different machines.
   
*/
