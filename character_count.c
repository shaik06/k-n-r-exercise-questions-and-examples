//Program counts the number of input characters.
///////////////////////////////////////////////  Logic-1  //////////////////////////////////////////////////////////////////////
#include<stdio.h>
int main()
{
  int ch; // Stores the user input character.
  long nc=0; //Value gets incremented when a character is encountered.
  
  while((ch=getchar())!=EOF)
      ++nc;
  printf("The number of characters entered:\t%ld\n",nc);
  
}


/* code feedback:
  
  -> 'nc' is declared as 'long' type, because it has higher storage capacity than int value.

*/

///////////////////////////////////////////   Logic-2   ///////////////////////////////////////////////////////////////////////

#include<stdio.h>
int main()
{
  long nc;
  
  for(nc=0;getchar()!=EOF;nc++);
  printf("The number of characters entered :\t%ld\n",nc);
}
