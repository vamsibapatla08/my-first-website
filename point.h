#ifndef POINT_3D_
#define POINT_3D_
#include <string.h>
#include <stdio.h>

typedef struct Point3D_struct{
    double x, y, z;
} Point;

void midpoint(Point one, Point two, Point p);
void distance(Point one, Point two, double dis);

#endif