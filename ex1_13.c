//Program to print a histogram of the lengths of words in its input.
#define IN 1
#define OUT 0
#include<stdio.h>
int main()
{
  int ch;
  int state=OUT;
  
  printf("Please enter the input.\n");
  
  while((ch=getchar())!=EOF)
  {
      if(ch==' ' || ch=='\t' || ch=='\n')
        state=OUT;
        
      else if(state==OUT)
        {
          putchar('\n');
          putchar('|');
          state=IN;
        }
        
      else
        putchar('|');
  }
  
}
