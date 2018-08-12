//Program prints the table of Fahrenheit temperatures and their Celsius equivalents.

//////////////////////////////////////////////////////Logic-1////////////////////////////////////////////////////////////////

#include<stdio.h>
int main()
{
  int lower=0; //Stores the lowest value of the range.
  int upper=300; // Stores the maximum value of the range.
  int step=20; // Stores the step size value.
  int fahr=lower; // Stores the Fahrenheit temperature value
  int celsius=0; // Stores the computed Celsius Value.
  
  while(fahr<=upper)
  {
    celsius = 5*(fahr-32)/9; // '5/9' is integer division, and the fractional part is discarded, and produces '0'.
    printf("%d/u2109\t=\t%d\u2103\n",fahr,celsius); // '\u2109' for fahrenheit, and '\u2103' for celsius.
    fahr+=step;
  }
}

/* code feedback:
-> The arithmetic performed in the above code is purely with integers, so the fractional part is discarded, 
   which doesn't produce accurate values.
-> Too many variables used, program can be made more compact.
-> Declarations could've have been done in a single line, but avoided, to make the code more meaningful by adding comments for
   each declaration.
-> The logic is limited to only constant values, user input is not defined.
 */
 
 ////////////////////////////////////////////////////Logic-2//////////////////////////////////////////////////////////////////
 
 #include<stdio.h>
 int main()
 {
    float fahr;
    for(fahr=0;fahr<=300;fahr+=20)
          printf("%6.0f\u2109\t=\t%6.2f\u2103\n",fahr,((5.0/9.0)*(fahr-32)));
          
 }
 
/*Code feedback:
 
 -> All the variables have been removed and only a single 'fahr' variable of float type is used.
 -> The computing expression is added as a 3rd argument of 'printf' function.
 -> 'FOR' loop is used, and the definition of 'fahr' , conditional expression , and the increment is part of the 
     'for' statement.
 -> The code looks small and more compact, the 'for' loop has beautifully shortened the code.
 
*/
