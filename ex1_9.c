//Program to copy its input to its output, replacing each string of one or more blanks by a single blank.

#include<stdio.h>
int main()
{

  int ch; //Takes user input
  int bl; //counts the blanks
  
  printf("Please enter the input.\n");
  
  while((ch=getchar())!=EOF)
    {
        if(ch==' ')
        {
            ++bl;
            if(bl>1)
              continue;
            else
              putchar(ch);
        }
       else
       {
          bl=0;
          putchar(ch);
       }
   }
}
