//Program counts the number of lines.

#include<stdio.h>
int main()
{
  int ch; // Takes in the user input value.
  long nl=1; //keeps the line count.
  
  printf("Please enter the input.\n");
  
  while((ch=getchar())!=EOF)
        if(ch=='\n')
            ++nl;
  printf("The number of line:\t%ld\n",nl);
}
