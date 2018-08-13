//Program to print a histogram of the frequencies of different characters in its input.

#include<stdio.h>
int main()
{
    int freq[128-' ']={0}; //saves the count of the characters.
    int save[128-' ']={0}; // saves the input characters.
    int ch;
    printf("Please enter the input.\n");
    
    while((ch = getchar()) ! = EOF)
    {
        if(ch>=' ' && ch<=127)
          {
              ++freq[ch-' '];
              save[ch-' ']=ch;
          }
    }
    
    for(int i = 0; i < (128 - ' ') ; i++)
    {
        if( freq[i] )
          {
            printf("%c :- \t",save[i]);  
            
            for(int j = 0 ; j <= freq[i] ; j++)
                  putchar('|');
            
            putchar('\n');
          }
    }
    
}

/*code feedback:
  
  -> It's a cute little program.
    
*/
