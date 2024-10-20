#include "rectangle.h"  // Include the header file

Rectangle createRectangle(int length, int width) {
    Rectangle rect;
    rect.length = length;
    rect.width = width;
    return rect;
}

int calculateArea(Rectangle rect) {
    return rect.length * rect.width;
}

int calculatePerimeter(Rectangle rect) {
    return 2 * (rect.length + rect.width);
}