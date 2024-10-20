#ifndef RECTANGLE_H
#define RECTANGLE_H

typedef struct {
    int length;
    int width;
} Rectangle;

Rectangle createRectangle(int length, int width);
int calculateArea(Rectangle rect);
int calculatePerimeter(Rectangle rect);

#endif