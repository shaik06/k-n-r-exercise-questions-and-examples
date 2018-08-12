//Program to count the number of occurances of each digit, or white space characters, and other characters.

#include<stdio.h>
int main()
{
  long digits[10]={0}; //stores the individual digit count values
  long other=0; //stores count value of characters other than digits and white-space characters.
  long ws=0; //stores the count value of white-space characters.
  int ch;
  
  printf("Please enter the input.\n");
  
  while((ch=getchar())!=EOF)
  {
      if(ch>='0' && ch<='9')
        ++digits[ch-'0'];
      else if(ch==' ' || ch=='\t' || ch=='\n')
         ++ws;
      else
          ++other;
  }
  
  printf("The digit count:\n");
  for(int i=0;i<10;i++)
    printf("%ld\t",digits[i]);
  
  putchar('\n');
  
  printf("The number of whitespace characters: %ld\n",ws);
  
  printf("The number of other characters: %ld\n",other);
}
