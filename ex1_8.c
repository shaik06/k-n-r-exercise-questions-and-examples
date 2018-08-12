//Program to count blanks,tabs, and newlines.

#include<stdio.h>
int main()
{
  long tb=0; //Stores 'Tab' count value.
  long nl=0; //Stores 'line' count value.
  long bl=0; //Stores 'blank' count value.
  int ch;
  
  while((ch=getchar())!=EOF)
      switch(ch)
        {
          case ' ': ++bl;
          break;
          case '\n': ++nl;
          break;
          case '\t': ++tb;
          break;
        }
   printf("The number of blanks: %ld,\n The number of tabs: %ld,\nThe number of lines: %ld .\n",bl,tb,nl);
}
