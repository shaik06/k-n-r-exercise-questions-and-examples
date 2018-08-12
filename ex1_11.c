//Program to count the number of words.
#define IN 1
#define OUT 0
#include<stdio.h>
int main()
{
  int ch;
  long word;
  int status=0;
  
  printf("Please enter the input.\n");
  
  while((ch=getchar())!=EOF)
  {
    if(ch==' ' || ch=='\t' || ch=='\n')
        status=OUT;
    else if(status==OUT)
        {
            status=IN;
            word++;
         }
  }
  printf("The number of words are: %ld\n",word);
}

/* code feedback:

-> eg: ' hey , hello . how are you ? '
    The above input gives '8' words as in count, but the number of words are only '5'. This can be one of the bug.

*/
