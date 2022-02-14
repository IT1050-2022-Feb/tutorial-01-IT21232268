/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int minimum(int n1,int n2);
int maximum(int n1,int n2);
int multiply(int n1,int n2);

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("Minimum number is:%d \n", minimum(no1, no2));
   printf("Maximum number is:%d \n", maximum(no1, no2));
   printf("Multiply is:%d ", multiply(no1, no2));
   return 0;
}

int minimum(int n1,int n2)
{
  int m;

  if(n1<n2)
  {
    m=n1;
  }
  else
  {
    m=n2;
  }
  return m;
}

int maximum(int n1,int n2)
{
  int M;

  if(n1>n2)
  {
    M=n1;
  }
  else
  {
    M=n2;
  }
  return M;
}

int multiply(int n1,int n2)
{
  int mul;

  mul=n1*n2;

  return mul;
}