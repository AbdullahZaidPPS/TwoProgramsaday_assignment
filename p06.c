#include<stdio.h>
void input_string(char *a)
{
  printf("Enter the string\n");
  scanf("%s",a);
}
int str_reverse(char *a)
{
  int b;
  for(int i=0;a[i]!='\0';i++)
    {
      b=i;
    }
  return b;
}
void output(char *a,int reversea)
{
  for(int j=reversea;j>=0;j--)
    {
      printf("%c",a[j]);
    }
}
int main()
{
  char b[50];
  int y;
  input_string(b);
  y=str_reverse(b);
  output(b,y);
  return 0;
}
