// Name: <Bukky Adekunle>
// Class: CS 3305/Section#03
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 1
// FILE: Rectangle.h
// CLASS PROVIDED: Rectangle
#ifndef RECTANGLE_H
#define RECTANGLEclTabCtrl_H
#include <iostream> // Provides cout and cin
#include <string.h> // Provides string
using namespace std; // Allows all Standard Library items to be used
namespace Assignment1_Rectangle
// Creation of the private double variable height and width for the rectangle class
{
class Rectangle
{
   double width;
   double height; 
public:
// CONSTRUCTORS for the rectangle class:
    Rectangle();
    // Postcondition: The Rectangle is created with a height and width of 1.00 units
    Rectangle(double w, double h);
    // Precondition: w > 0, h > 0;
    // Postcondition: The Rectangle has width and height based on the user's input
// Functions for the Rectangle class
    double getWidth();
    // Postcondition: The width of the Rectangle is returned
    double getHeight();
    // Postcondition: The height of the Rectangle is returned
    double getArea();
    // Postcondition: The area of the Rectangle has been calculated and returned
    double getPerimeter();
    // Postcondition: The perimeter of the Rectangle has been calculated and returned
    void printRectangle(string objectName);
    // Precondition: objectName is a string
    // Postcondition: A statement has been printed about the perimeter and area of a rectangle which is called the objectName
    
 
   ~Rectangle();
   
   
};
}
#endif // RECTANGLE_H
