//Verify that the expression getchar()!=EOF is 0 or 1.

#include<stdio.h>
int main()
{
    int ch; // Stores the user input character.
    
    printf("Please enter the input.\n");
    
    while(ch=getchar()!=EOF)
            putchar(ch);
            
}

/* code feedback:
 
 -> First ' getchar()!=EOF ' gets evaluated, and produces either '0' or '1', and gets assigned to the variable
    'ch', and behaves as a test condition for the 'while' construct.
 -> ' getchar()!=EOF ' , gets evaluated first because '!=' has higher predecence than '=' operator.
 
*/
