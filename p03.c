#include<stdio.h>
int input_number()
{
  int n;
  printf("Enter the number\n");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
  int a=0;
  for(int i=1;i<=n;i++)
    {
      if(n%i==0)
      {
        a++;
      }
    }
  return a;
}
void output(int n,int composite)
{
  if(composite>2)
  printf("%d is a composite number\n",n);
  else if(composite==2)
    printf("%d is a prime number\n",n);
  else if(composite==1)
    printf("1 is neither a prime nor a composite number\n");
}
int main()
{
  int x,y;
  x=input_number();
  y=is_composite(x);
  output(x,y);
  return 0;
}
