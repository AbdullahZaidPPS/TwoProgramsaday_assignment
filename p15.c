#include<stdio.h>
#include<math.h>
struct _point
{
  float x,y;
};
typedef struct _point Point;
struct _line
{
  Point p1,p2;
  float distance;
};
typedef struct _line Line;
Point input_point()
{
  Point p;
  printf("Enter abscissa and ordinate\n");
  scanf("%f%f",&p.x,&p.y);
  return p;
}
Line input_line()
{
  Line l;
  printf("Enter first coordinates\n");
  l.p1=input_point();
  printf("enter second coordinates\n");
  l.p2=input_point();
  return l;
}
void find_length(Line *l)
{

  l->distance=sqrt(pow((l->p2.x-l->p1.x),2)+pow((l->p2.y-l->p1.y),2));
}
void output(Line l)
{
  printf("The distance is %f",l.distance);
}
int main()
{
  Line l21,l31;
  l21=input_line();
  find_length(&l21);
  output(l21);
  return 0;
}



