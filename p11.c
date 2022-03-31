#include<stdio.h>
int input_number()
{
  int n;
  printf("Enter the number\n");
  scanf("%d",&n);
  return n;
}
int is_prime(int n)
{
  int c=0;
  for(int i=1;i<=n;i++)
    {
      if(n%i==0)
      {
        c++;
      }
    }
  return c;
}
void output(int n, int is_prime)
{
  if(is_prime==2)
  {
    printf("%d is a prime number\n",n);
  }
  else
  {
    printf("%d is not a prime number\n",n);
  }
}
int main()
{
  int enter,count;
  enter=input_number();
  count=is_prime(enter);
  output(enter,count);
  return 0;
}