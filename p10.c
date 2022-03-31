#include<stdio.h>
void input_triangle(float *x1,float *y1,float *x2,float *y2,float *x3,float *y3)
{
  printf("Enter the x and y coordinates\n");
  scanf("%f%f%f%f%f%f",x1,y1,x2,y2,x3,y3);
}
int is_triangle(float x1,float y1,float x2,float y2,float x3,float y3)
{
  int area;
  area=0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
  return area;
}
void output(float x1,float y1,float x2,float y2,float x3,float y3,int istriangle)
{
  if(istriangle>0.0000001)
  {
    printf("The three points cant form a triangle\n");
  }
  else if(istriangle<0.0000001)
  {
    printf("The three points can form a triangle\n");
  }
}
int main()
{
  float a1,b1,a2,b2,a3,b3;
  int result;
  input_triangle(&a1,&b1,&a2,&b2,&a3,&b3);
  result=is_triangle(a1,b1,a2,b2,a3,b3);
  output(a1,b1,a2,b2,a3,b3,result);
  return 0;
}