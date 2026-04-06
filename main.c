#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include "point.h"

int main(){
    double x1 = 0;
    double y1 = 0;
    double z1 = 0;
    double x2 = 0;
    double y2 = 0;
    double z2 = 0;

    scanf("%lf", &x1);
    scanf("%lf", &y1);
    scanf("%lf", &z1);
    scanf("%lf", &x2);
    scanf("%lf", &y2);
    scanf("%lf", &z2);

    Point p1;
    Point p2;
    Point newP;
    double dis = 0.0;

    p1.x = x1;
    p1.y = y1;
    p1.z = z1;
    p2.x = x2;
    p2.y = y2;
    p2.z = z2;
    newP.x = 0;
    newP.y = 0;
    newP.z = 0;

    midpoint(p1, p2, newP);
    distance(p1, p2, dis);

    printf("midpoint: %.2lf, %.2lf, %.2lf\n", newP.x, newP.y, newP.z);
    printf("distance: %.2lf\n", dis);

    return 0;

}