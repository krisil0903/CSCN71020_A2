#ifndef RECTANGLE_H
#define RECTANGLE_H

typedef struct {
    int length;
    int width;
} Rectangle;

// Existing function declarations
Rectangle createRectangle(int length, int width);
int calculateArea(Rectangle rect);
int calculatePerimeter(Rectangle rect);

// Add these declarations for setLength and setWidth
void setLength(int input, int* length);
void setWidth(int input, int* width);

#endif
