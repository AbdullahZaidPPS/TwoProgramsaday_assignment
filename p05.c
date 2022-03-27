#include<stdio.h>
int input()
{
  int c;
  printf("Enter the number\n");
  scanf("%d",&c);
  return c;
}
int gcd(int a,int b)
{
  int n;
  while(b!=0)
    {
      n=b;
      b=a%b;
      a=n;
    }
   return a;
}
void output(int a,int b,int gcd)
{
  printf("The gcd of %d and %d is %d",a,b,gcd);
}
int main()
{
  int x,y,z;
  x=input();
  y=input();
  z=gcd(x,y);
  output(x,y,z);
  return 0;
}
