//Program to print the longest line among the line of inputs.

#include<stdio.h>
#define MAX 1000
int get_line(char*,int);
void copy(char*,char*);
int main()
{
  char line[MAX]={0}; // Stores the input line.
  char longest[MAX]={0}; //saves the longest line
  int len=0; // saves the length of the line.
  int max=0; //saves the length of the longest line.
  
  while((len=get_line(line,MAX))>0)
   {
      if(len>max)
        {
          max=len;
          copy(line,longest);
        }
   }
   
   if(max>0)
   {
    printf("The length of the longest line:\t\n",max);
    printf("The longest line: \n");
    printf("%s\n",longest);
   }
}
  
int get_line(char l[],int limit)
{
    int ch;
    int i;
    printf("Please enter a line.\n");
    
    for(i=0; (i < limit-1) && ( (ch = getchar()) != EOF) && (ch != '\n'); i++)
      l[i]=ch;
    
    if(ch=='\n')
      l[i++]='\n';
      
    l[i]='\0';
    
    return i;
}

void copy( char from[], char to[])
{
    int i;
    
    for(i=0; (to[i] = from[i]) !='\0' ; i++);
}
