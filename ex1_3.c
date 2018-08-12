//Modify the temperature conversion program to print a heading above the table.

#include<stdio.h>
float compute(float);
int main()
{
  float fahr1; //stores the lower bound value of the range, entered by the user.
  float fahr2; //stores the upper bound value of the range, entered by the user.
  int step; //stores the step value entered by the user.
  
  printf("Please enter the range values.\n");
  scanf("%f %f",&fahr1,&fahr2);
  printf("Please enter the 'step' size value.\n");
  scanf("%d",&step);
  
  if(fahr1<fahr2)
  {
      printf("Printing the Fahrenheit - Celsius Table in Ascending Order.\n");
      for(; (fahr1<=fahr2); fahr1+=step)
          printf("%6.2f\u2109\t=\t%6.2f\u2103\n",fahr1,compute(fahr1));
          
   }
   
   else if(fahr1>fahr2)
   {
      printf("Printing the Fahrenheit - Celsius Table in Descending Order.\n");
      while(fahr1>=fahr2)
          {
              printf("%6.2f\u2109\t=\t%6.2f\u2103\n",fahr1,compute(fahr1));
              fahr1-=step;
          } 
   }
   
   else
        printf("Please check the input values.\n");
        
   return;
   
}

float compute(float fahr)
  {
      return ((5.0/9.0)*(fahr-32.0));
  }
  
  
  /* Code feedback:
  
  -> User enters the lower bound, upper bound and step size values.
  -> The user can input the values in whatever order he wishes for, the output is either Ascending order,
      or Descending order based on the order of input values.
      
  */
