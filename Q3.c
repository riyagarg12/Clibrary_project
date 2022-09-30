#include<stdio.h>
#include<conio.h>
#include<math.h>
#include"Library.h"
#include"Library.c"
void main()
{
    double area_under_A;
    double x1,y1,x2,y2,x3,y3;
    printf("Enter 1st co-ordinate of triangle  to calc area ");
    scanf("%lf%lf",&x1,&y1);
    printf("Enter 2nd co-ordinate of triangle  to calc area ");
    scanf("%lf%lf",&x2,&y2);
    printf("Enter 3rd co-ordinate of triangle to calc area ");
    scanf("%lf%lf",&x3,&y3);
    area_under_A=find_area(x1,y1,x2,y2,x3,y3);
    printf("Area to be coloured black :%lf\n",area_under_A);
}

