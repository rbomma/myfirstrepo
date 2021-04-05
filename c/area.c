#include <stdio.h>
#include "mylib.h"

int main(){
  double radius;
  printf("enter a radius: ");
  scanf("%lf",&radius);
  //printf("radius=%lf\n",radius);
  double area = area_of_circle(radius);
  printf("Area of cirlce with radius = %lf is %lf\n",radius, area);
}
