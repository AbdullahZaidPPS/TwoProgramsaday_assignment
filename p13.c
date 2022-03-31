#include<stdio.h>
int input_array_size()
{
  int n;
  printf("enter the array size\n");
  scanf("%d",&n);
  return n;
}
void init_array(int n,int a[n])
{
  a[0]=1;
  for (int i=2;i<n;i++)
    {
      a[i]=i;
    }
}
void erotosthenes_sieve(int n,int a[n])
{
  for(int i=2;a[i]*a[i]<=n;i++)
    {
      if(a[i]!=0)
      {
        for(int j=a[i]*a[i];j<=n;j+=a[i])
          {
            a[j]=0;
          }
      }
    }
}
void out_put(int n,int a[n])
{
  for(int i=1;i<n;i++)
    {
      if(a[i]!=0)
      {
        printf("%d,",a[i]);
      }
    }
}         
int main()
{
  int y;
  int k[y];
  y=input_array_size();
  init_array(y,k);
  erotosthenes_sieve(y,k);
  out_put(y,k);
  return 0;
}

#include<stdio.h>
int input_array_size()
{
  int n;
  printf("enter the array size\n");
  scanf("%d",&n);
  return n;
}
void init_array(int n, int a[n])
{
  a[0]=1;
  for (int i=2;i<n;i++)
    {
      a[i]=i;
    }
}
void erotosthenes_sieve(int n, int a[n])
{
  
}
void out_put(int n, int a[n]);