#include<stdio.h>
#include<math.h>
#include"Library.h"
#include"Library.c"
int main()
{
    double lat1,lat2,long1,long2;
    printf("Enter latitude and longitude values of first place ");
    scanf("%lf%lf",&lat1,&long1);
    printf("Enter latitude and longitude values of second place ");
    scanf("%lf%lf",&lat2,&long2);
    double distance;
    distance=find_distance(lat1,long1,lat2,long2);
    printf("Distance between Saurabh Sir and Prateek Sir: %lf K.M.\n",distance);

    return 0;
}

