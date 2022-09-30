double find_angle(double m1,double m2)
{
    double temp=(m1-m2)/(1+m1*m2);
    double val=180/3.14159265;
    double result = atan(temp)*val;
    return result;
}
double toradian(double l)
{
    return 3.14159265*l/180;
}
double find_distance(double lat1,double long1,double lat2,double long2)
{
    lat1=toradian(lat1);
    lat2=toradian(lat2);
    long1=toradian(long1);
    long2=toradian(long2);
    double d_lat=lat2-lat1;
    double d_long=long2-long1;
    double distance= pow(sin(d_lat/2),2)+cos(lat1)*cos(lat2)*pow(sin(d_long/2),2);
    distance=2* asin(sqrt(distance));
    double z=6371;
    distance=distance*z;
    return distance;
}
double find_area(double x1,double y1,double x2,double y2,double x3,double y3)
{
    double result;
    result=0.5*(fabs((x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))));
    return result;
}

