// Name: <Bukky Adekunle>
// Class: CS 3305/Section#03
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 1
// FILE: Rectangle.cpp
// CLASS IMPLEMENTED: Rectangle (see Rectangle.h for documentation)
#include <bits/stdc++.h> // Provides std library
#include <iostream> // Provides cout and cin
#include "Rectangle.h" // Provides Rectangle class definition
using namespace std; // Allows all Standard Library items to be used
namespace Assignment1_Rectangle
{
Rectangle::Rectangle()
{
    //default constructor
    width = 1.00;
    height = 1.00;
}
Rectangle::Rectangle(double w, double h)//overloaded constructor
    {
        width = w;
        height = h;
    }
double Rectangle::getWidth()
{
return width;//return width of the Rectangle
}
double Rectangle::getHeight()
{
return height; //return height of the Rectangle
}
double Rectangle::getArea()
{
double area = width*height;//formula to calculate the area of Rectangle
return area;//return area of the Rectangle
}
double Rectangle::getPerimeter()
{
double perimeter = 2*(width+height);//formula to calculate the area of Rectangle
return perimeter;//return perimeter of the Rectangle
}
void Rectangle::printRectangle(string objectName)
{
cout<<"Rectangle " << objectName << " is " << fixed << setprecision(1) << width << " units wide and " << height << " units high."<< endl;
// prints out statement regarding the height and width of the Rectangle
}


Rectangle::~Rectangle()
{
}
}


