//Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0.

#include<stdio.h>
int main()
{
  float fahr;
  for(fahr=0;fahr>=0;fahr--)
      printf("%6.0f\u2103\t=\t%6.2f\u2109\n",fahr,((5.0/9.0)*(fahr-32.0));
 }
