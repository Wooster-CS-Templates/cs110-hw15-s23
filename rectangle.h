#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <stdlib.h>

struct point {
    int x;
    int y;
};

struct rectangle {
    struct point p1;
    struct point p2;
};

struct rectangle_properties {
    int area;
    int perimeter;
};

/**
 * Given a pointer to a rectangle, calculate the area and perimeter of the
 * rectangle and store the results in the struct pointed to by props.
 *
 * Parameters:
 *   rect - pointer to a rectangle
 *   props - pointer to the struct in which to store the results
 */
void get_rectangle_properties(const struct rectangle *rect,
                              struct rectangle_properties *props);


#endif
