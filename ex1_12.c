//Program that prints its input one word per line.
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
          putchar('\n'); //when 'ch' is the first character of the word, then this test condition gets executed, so a '\n'.
          putchar(ch);
          state=IN;
        }
        else
           putchar(ch); //This starts printing the word from the second character of the word.
      }
      
}
