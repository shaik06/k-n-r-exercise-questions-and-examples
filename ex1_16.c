/*
Revise the main routine of the longest-line program so it will correctly print the length of arbitrarily long input lines,
and as much as possible of the text.
EXPLANATION: 
->This states that, let the user input as many characters as he wants to, even greater than the size of the array,
  the program should capture the actual input line size, and the array will anyhow stop saving if the array is full.
*/

#include<stdio.h>
#define MAX 10
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
    printf("The length of the longest line:\t%d\n",max);
    printf("The longest line: \n");
    printf("%s\n",longest);
   }
}
  
int get_line(char l[],int limit)
{
    int ch;
    int i;
    printf("Please enter a line.\n");
    
    for(i=0; ( (ch = getchar()) != EOF) && (ch != '\n'); i++)
      { 
        if(i < limit-1)
            l[i]=ch;
      }
    
    if(ch=='\n')
      {
        if(i < limit-1)
            l[i++]='\n';
      }
    
    if(i < limit-1)
        l[i]='\0';
        
    
    return i;
}

void copy( char from[], char to[])
{
    int i;
    
    for(i=0; (to[i] = from[i]) !='\0' ; i++);
}
