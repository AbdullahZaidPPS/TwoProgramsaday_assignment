#include<stdio.h>
void input_string(char *a)
{
  printf("Enter the string\n");
  scanf("%s",a);
}
int str_reverse(char *string,char *substring)
{
  printf("Enter the substring\n");
  scanf("%s",substring);
  int index,j=0,i;
  for( i=0;string[i]!='\0' && substring[j]!='\0';i++)
  {
    if(string[i]==substring[j])
    {
      j++;
    }
    else
    {
      j=0;
    }
    
  }
  index=i-j;
  return index;
}
void output(char *string,char *substring,int index)
{
  printf("The index of %s in %s is %d\n",substring,string,index);
}
int main()
{
  char x[50];
  char z[50];
  int y;
  input_string(x);
  y=str_reverse(x,z);
  output(x,z,y);
}
