#include<stdio.h>
#include<math.h>
void input(float *x1,float *y1,float *x2,float *y2)
{
  printf("Enter the x1,y1,x2 and y2 values\n");
  scanf("%f%f%f%f",x1,y1,x2,y2);
}
void find_distance(float x1,float y1,float x2,float y2, float *area)
{
  *area=sqrt((pow(x2-x1,2)+pow(y2-y1,2)));
}
void output(float x1,float y1,float x2,float y2,float area)
{
  printf("The distance between point(%f,%f) and (%f,%f) is %f",x1,y1,x2,y2,area);

}
int main()
{
  float x1,y1,x2,y2,distance;
  input(&x1,&y1,&x2,&y2);
  find_distance(x1,y1,x2,y2,&distance);
  output(x1,y1,x2,y2,distance);
  return 0;
}
