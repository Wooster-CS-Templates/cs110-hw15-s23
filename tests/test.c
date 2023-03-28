#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include "../rectangle.h"

void test_rectangle(int x1, int y1, int x2, int y2) {
    struct point p1 = {x1, y1};
    struct point p2 = {x2, y2};

    struct rectangle rect = {p1, p2};

    struct rectangle_properties props;

    get_rectangle_properties(&rect, &props);

    int width = abs(x1 - x2);
    int height = abs(y1 - y2);

    int area = width * height;
    int perimeter = 2 * (width + height);

    if(area != props.area || perimeter != props.perimeter) {
        printf("Test Failed:\n");
        printf("Given the rectangle with points (%i,%i) and (%i,%i), expected the area to be %i and the perimeter to be %i. Instead the area was %i and the perimeter was %i\n", x1, y1, x2, y2, area, perimeter, props.area, props.perimeter);
        exit(1);
    }
}

int main() {
    test_rectangle(0, 0, 1, 1);
    test_rectangle(1, 1, -1, -1);
    test_rectangle(-2, 1, 3, 0);
    test_rectangle(100, -6, -30, 600);
    test_rectangle(-15234813, 0, 1058507009, -1);
    
    printf("All tests passed!\n");

    return 0;
}
