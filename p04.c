#include<stdio.h>
int input_array_size()
{
  int n;
  printf("Enter the array size\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  printf("Enter the values\n");
  for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
}
int sum_composite_numbers(int n,int a[n])
{
  int c=0,sum=0;
  int j;
  for( j=0;j<n;j++)
    {
      for(int k=1;a[j]%k==0 && k<a[j];k++)
        {
          c++;
        }
      if(c>2)
          {
            sum=sum+a[j];
          }
  
    }
  return sum;
  
}
void out_put(int sum)
{
  printf("%d\n",sum);
}
int main()
{
  int x,y;
  x=input_array_size();
  int b[x];
  input_array(x,b);
  y=sum_composite_numbers(x,b);
  out_put(y);
}