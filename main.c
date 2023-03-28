#include <stdio.h>

#include "rectangle.h"

int main() {
    struct rectangle rect;

    printf("Enter the x coordinate of the first point: ");
    scanf("%i", &rect.p1.x);
    printf("Enter the y coordinate of the first point: ");
    scanf("%i", &rect.p1.y);
    printf("Enter the x coordinate of the second point: ");
    scanf("%i", &rect.p2.x);
    printf("Enter the y coordinate of the second point: ");
    scanf("%i", &rect.p2.y);

    struct rectangle_properties props;

    get_rectangle_properties(&rect, &props);

    printf("Area: %i\n", props.area);
    printf("Perimeter: %i\n", props.perimeter);

    return 0;
}
