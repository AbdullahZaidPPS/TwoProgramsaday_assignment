#include<stdio.h>
struct _complex
{
  float real;
  float imaginary;
};
typedef struct _complex Complex;
int get_n()
{
  int n;
  printf("enter how many complex numbers you want to add\n");
  scanf("%d",&n);
  return n;
}
Complex input_complex()
{
  Complex c;
  printf("Enter the complex number\n");
  scanf("%f %f",&c.real,&c.imaginary);
  return c;
}
void input_n_complex(int n,Complex c[n])
{
  
  for (int i=0;i<n;i++)
  {
    c[i]=input_complex();
  }
}
Complex add(Complex a,Complex b)
{
  Complex d;
  d.real=a.real+b.real;
  d.imaginary=a.imaginary+b.imaginary;
  return d;
}
Complex add_n_complex(int n,Complex c[n])
{
  Complex result={0,0};
  for (int i=0;i<n;i++)
  {
    result=add(result,c[i]);
  }
  return result;
}
void output(int n,Complex c[n],Complex result)
{
  for(int i=0;i<n-1;i++)
  {
    printf("%f + %fi\n",c[i].real,c[i].imaginary);
  }
  printf("+ %f + %fi is\n",c[n-1].real,c[n-1].imaginary);
  printf("%f + %fi\n",result.real,result.imaginary);
}
int main()
{
  int n;
  Complex c[n];
  Complex result;
  n=get_n();
  input_n_complex(n,c);
  result=add_n_complex(n,c);
  output(n,c,result);
  return 0;
}

