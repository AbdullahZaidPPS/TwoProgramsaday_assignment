#include<stdio.h>
void input(float *base,float *height)
{
  printf("Enter base and height of a triangle\n");
  scanf("%f%f",base,height);
}
void find_area(float base,float height,float *area)
{
  *area=0.5*base*height;
}
void output(float base,float height,float area)
{
  printf("The area of the triangle with base %f and height %f is %f\n",base,height,area);
}
int main()
{
  float base1,height1,area1;
  input(&base1,&height1);
  find_area(base1,height1,&area1);
  output(base1,height1,area1);
  return 0;
}
