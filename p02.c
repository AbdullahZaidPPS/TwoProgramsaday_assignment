#include<stdio.h>
int input_side()
{
  int side;
  printf("Enter the side\n");
  scanf("%d",&side);
  return side;
}
int check_scalene(int a,int b,int c)
{
  int scalene;
  if(a!=b && a!=c && b!=c)
  {
    return 1;
  }
  else if(a==b || b==c || c==a)
  {
    return -1;
  }
  return scalene;
}
void output(int a,int b,int c,int isscalene)
{
   if(isscalene==1)
  printf("The given triangle is scalene\n");
   if(isscalene==-1)
  printf("The given triangle isn't scalene\n");
}
int main()
{
  int x,y,z,w;
  x=input_side();
  y=input_side();
  z=input_side();
  w=check_scalene(x,y,z);
  output(x,y,z,w);
  return 0;
}
