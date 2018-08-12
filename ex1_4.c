//Program to print the corresponding Celsius to Fahrenheit table.

#include<stdio.h>
float compute(float);
int main()
{
  float cel1; //stores the lower bound value of the range, entered by the user.
  float cel2; //stores the upper bound value of the range, entered by the user.
  int step; //stores the step value entered by the user.
  
  printf("Please enter the range values.\n");
  scanf("%f %f",&cel1,&cel2);
  printf("Please enter the 'step' size value.\n");
  scanf("%d",&step);
  
  if(cel1<cel2)
  {
      printf("Printing the Celsius - Fahrenheit Table in Ascending Order.\n");
      for(; (cel1<=cel2); cel1+=step)
          printf("%6.2f\u2109\t=\t%6.2f\u2103\n",cel1,compute(cel1));
          
   }
   
   else if(cel1>cel2)
   {
      printf("Printing the Fahrenheit - Celsius Table in Descending Order.\n");
      while(cel1>=cel2)
          {
              printf("%6.2f\u2109\t=\t%6.2f\u2103\n",cel1,compute(cel1));
              cel1-=step;
          } 
   }
   
   else
        printf("Please check the input values.\n");
        
   return;
   
}

float compute(float cel)
  {
      return (((9*cel)/5)+32);
  }
  
  
  /* Code feedback:
  
  -> User enters the lower bound, upper bound and step size values.
  -> The user can input the values in whatever order he wishes for, the output is either Ascending order,
      or Descending order based on the order of input values.
      
  */
