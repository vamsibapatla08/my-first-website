#include <string.h>
#include <stdio.h>
#include "point.h"
#include <math.h>

void midpoint(Point one, Point two, Point p){
    p.x = (one.x+two.x)/2;
    p.y = (one.y+two.y)/2;
    p.z = (one.z+two.z)/2;
}

void distance(Point one, Point two, double dis){
    dis = sqrt( pow((two.x-one.x), 2) + pow((two.y-one.y), 2) + pow((two.z-one.z), 2) );
} 