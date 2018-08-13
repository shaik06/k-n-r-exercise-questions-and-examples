//Program to printf all input lines that are longer than 80 characters.

#include<stdio.h>
#define MAX 1000
int get_line(char*,int);
void copy(char*,char*);

int main()
{
  char line[MAX]={0}; // Stores the input line.
  int len=0; // saves the length of the line.
  
  while((len=get_line(line,MAX))>0)
   {
      if(len>80)
        {
          printf("The line longer than 80 characters:\n");
          printf("%s\n",line);
        }
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
