#include<stdio.h>
#include<conio.h>
#include<math.h>
#include"Library.h"
#include"Library.c"
void main()
{
    double angle_at_chowk;
    int a,b,c,d,e,f;
    printf("Enter coefficients of x,y,z for the equation of the form ax+by+c=0 for 1st road ");
    scanf("%d%d%d=0",&a,&b,&c);
    printf("Enter coefficients of x,y,z for the equation of the form ax+by+c=0 for 2nd road ");
    scanf("%d%d%d=0",&d,&e,&f);
    double m1=-b/a;
    double m2=-e/d;
    angle_at_chowk=find_angle(m1,m2);
    printf("Angle between roads is %g degrees",angle_at_chowk);
}
