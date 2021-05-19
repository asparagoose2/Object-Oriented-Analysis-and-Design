#ifndef POINT_H
#define POINT_H
#pragma once

class Point
{
public:
    int x,y;

    Point() : x(0), y(0) {};
    Point(int _x, int _y) : x(_x), y(_y) {};
    ~Point() {};
};

#endif