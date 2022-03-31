#include<stdio.h>
int input()
{
  int n;
  printf("Enter the index of the number you want\n");
  scanf("%d",&n);
  return n;
}
int find_fibo(int n)
{
  int m1=0,m2=1,fibo;
  for(int i=0;i<=n-3;i++)
    {
      fibo=m1+m2;
      m1=m2;
      m2=fibo;
    }
  return m2;
}
void output(int n,int fibo)
{
  int x=0,y=1;
  if(n==1)
  printf("The %d st element is %d",n,x);
  else if(n==2 || n==3)
    printf("The %d nd/rd element is %d",n,y);
  else 
  printf("The %d th element in the fibonacci series is %d\n",n,fibo);
}
int main()
{
  int x,y;
  x=input();
  y=find_fibo(x);
  output(x,y);
  return 0;
}