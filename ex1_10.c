//Program to copy its input to its output, replacing each tab by \t, each backspace by \b, and each backslash by \\.

#include<stdio.h>
int main()
{
  int ch;
  printf("Please enter the input.\n");
  
  while((ch=getchar())!=EOF)
  {
     if(ch==' ')
     {
        putchar('\\');
        putchar('b');
     }
     
     else if(ch=='\t')
     {
        putchar('\\');
        putchar('t');
     }
     
     else if(ch=='\\')
     {
        putchar('\\');
        putchar('\\');
     }
     
     else
        putchar(ch);
  }
}

/* code feedback:
-> to check or print '\' backward slash, it has to be written twice.
*/
