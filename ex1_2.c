/*Experiment to find out what happens when printf's argument string contains '\c', where 'c' is some character. */

#include<stdio.h>
int main()
{
printf("\c\n");
}

//Output: '\c' is an unidentified escape sequence.
