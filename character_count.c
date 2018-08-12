//Program counts the number of input characters.

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
