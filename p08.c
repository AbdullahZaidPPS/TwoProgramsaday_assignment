#include<stdio.h>
struct _triangle
{
  float base,altitude,area;
};
typedef struct _triangle Triangle;
int input_n()
{
  int n;
  printf("Enter the number of triangles\n");
  scanf("%d",&n);
  return n;
}
Triangle input_triangle()
{
  Triangle b;
  printf("Enter base and height\n");
  scanf("%f%f",&b.base,&b.altitude);
  return b;
}
void input_n_triangles(int n,Triangle t[n])
{
  for(int i=0;i<n;i++)
    {
      t[i]=input_triangle();
    }
}
void find_area(Triangle *t)
{
  t->area=0.5*t->base*t->altitude;
}
void find_areas_n(int n, Triangle t[n])
{
  for(int i=0;i<n;i++)
    {
      find_area(&t[i]);
    }
}
Triangle find_smallest_triangle(int n,Triangle t[n])
{
  Triangle smallest;
  smallest.area=t[0].area;
  smallest.base=t[0].base;
  smallest.altitude=t[0].altitude;
  for(int i=0;i<n;i++)
    {
      if(smallest.area>t[i].area)
      {
        smallest.area=t[i].area;
        smallest.base=t[i].base;
        smallest.altitude=t[i].altitude;
        }
    }
  return smallest;
}
void output(int n, Triangle t[n], Triangle smallest)

{
  printf("The smallest of triangles with base and height");
  for(int i=0; i<n-1;i++)
    {
      printf(" %f,%f" ,t[i].base,t[i].altitude);
        }
        printf("and %f,%f is triangle with base %f and altitude %f is %f",t[n-1].base,t[n-1].altitude,smallest.base,smallest.altitude,smallest.area);
}
int main()
{
  int x;
  Triangle small;
  x=input_n();
  Triangle t[x];
  input_n_triangles(x,t);
  find_areas_n(x,t);
  small=find_smallest_triangle(x,t);
  output(x,t,small);
  return 0;
}

