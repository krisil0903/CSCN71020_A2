#include "rectangle.h"  // Include the header file
#include "pch.h"

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

void setLength(int input, int* length) {
    if (input >= 1 && input <= 99) {
        *length = input;
    }
}

void setWidth(int input, int* width) {
    if (input >= 1 && input <= 99) {
        *width = input;
    }
}