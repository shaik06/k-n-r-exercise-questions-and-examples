//Rewrite the temperature conversion program of section 1.2 to use a function for conversion.
#include<stdio.h>
void fahr_cel(void);
float compute(float);
int main()
{
  fahr_cel();
  return;
}

void fahr_cel()
{
    float fahr1;
    float fahr2;
    int step;
    
    printf("Please enter the Fahrenheit temperature range values.\n");
    scanf("%f%f",&fahr1,&fahr2);
    printf("Please enter the 'step' size.\n");
    scanf("%d",&step);
    
    if(fahr1<fahr2)
       {
          printf("Printing \u2109 - \u2103 Table in Ascending Order.\n");
          
          for(;fahr1<=fahr2; fahr1+=step)
              printf("%6.0f\u2109\t=\t%6.2f\u2103\n",fahr1,compute(fahr1));
          
       }
       
    else if(fahr1>fahr2)
      {
          printf("Printing \u2109  -  \u2103 Table in Descending Order.\n");
          
          for(;fahr1>=fahr2; fahr1-=step)
              printf("%6.0f\u2109\t=\t%6.2f\u2103\n",fahr1,compute(fahr1));
          
      }
      
   else
      printf("Please check the input values.\n");
 }
 
 float compute(float fahr)
 {
    return ((5.0/9.0)*(fahr-32.0));
 }
