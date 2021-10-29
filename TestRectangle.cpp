// FILE: TestRectangle.cpp
// This demonstration shows how the revised rectangle class is used.
// Name: <Bukky Adekunle>
// Class: CS 3305/Section#03
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 1

#include <bits/stdc++.h> // Provides standard library
#include <stdio.h> // Provides input and output
#include <iostream> //Provides cout and cin
#include <stdlib.h> // Provides studio library
#include "Rectangle.h" //Provides Rectangle class

using Assignment1_Rectangle::Rectangle;
int main()
{
double newHeight;// store newHeight
double newWidth;// store newWidth
	cout << "Type a width: "; // promt to enter the width
    cin >> newWidth;
    cout << "Type a height: "; // promt to enter the height
    cin >> newHeight;
    Rectangle myRectangle; // A Rectangle to use for our demonstration
    Rectangle herRectangle(newHeight, newWidth); // A Rectangle to use for our demonstration with the user input
    cout << "myRectangle \n" << "------------ \n" << "Width:" << setw(9) << fixed << setprecision(2) << myRectangle.getWidth() << "\n" << "Height:" << setw(8) << myRectangle.getHeight() << endl;
    cout << "Area:" << setw(10) <<  myRectangle.getArea() << "\n" << "Perimeter:" << setw(5) << myRectangle.getPerimeter() << endl;
    myRectangle.printRectangle("myRectangle") ;// calling printRectangle() func and for myRectangle
    cout<< endl;
    cout << "herRectangle \n" << "------------ \n" << "Width:" << setw(9) << fixed << setprecision(2) <<  herRectangle.getWidth() << "\n" << "Height:" << setw(8) << herRectangle.getHeight() << endl;
    cout << "Area:" << setw(10) << herRectangle.getArea() << "\n" << "Perimeter:" << setw(5) << herRectangle.getPerimeter() << endl;
    herRectangle.printRectangle("herRectangle");// calling printRectangle() func and for herRectangle

}


