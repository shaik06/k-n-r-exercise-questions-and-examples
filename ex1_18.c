//Program to remove trailing blanks and tabs from each line of input.
////////////////////////////////////////////////////Logic-1//////////////////////////////////////////////////////////////

#include<stdio.h>
#define MAX 1000
int get_line(char*,int);
int remove_trail(char*);
int main()
{
  char line[MAX]={0}; // Stores the input line.
  int len=0; // saves the length of the line.
  
  while((len=get_line(line,MAX))>0)
   {
    if( remove_trail( line ) )
      printf("%s\n",line);
    
    else
      printf("No trailing blanks in the line.\n");
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

int remove_trail(char x[])
{
  int i=0; //index value of the 'x' array.
  int s=0; //index value of the 'buff' array.
  char buff[100]={0};
  while(x[i]!='\0')
      {
        if( x[i] == ' ' || x[i] == '\t' )
            buff[s++]=x[i];

        else if( (x[i]=='\n') && (x>0))
            {
                i=i-s;
                x[i++]='\n';
                x[i]='\0';
                break;
            }
        else
            s=0;
        i++;
      }

  if(s)
      return 1;
   else
      return 0;
}

/* code feedback:

-> To remove trailing blanks, the continuous white-space characters except '\n' are stored in a buffer, and then the 
    index value is altered to remove the trailing blanks.
-> Using too many variables used to code a small program.

*/

////////////////////////////////////////////////////////Logic-2///////////////////////////////////////////////////////////

#include<stdio.h>
int main()
{
  int ch;
  char buff[100]={0};
  int s=0;
  
  printf("Please enter the input.\n");
  
  while((ch=getchar())!=EOF)
  {
      if(ch==' ' || ch=='\t')
        buff[s++]=ch;

      else if(ch=='\n')
        {
          if(s)
                s=0;
          putchar(ch);
        }

      else
      {
        if(s)
        {
                for(int j=0;j<s;j++)
                        putchar(buff[s]);
                s=0;
        }

        putchar(ch);
      }
  }

}

/* code feedback:
-> Though the code is not modularized, the code lines are reduced, and kept implementation specific.
*/
