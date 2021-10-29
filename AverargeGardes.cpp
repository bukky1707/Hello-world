// Name: <Bukky Adekunle>
// Class: CS 3305/Section#3
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 5

//void menu();
//double averageGardes(int arr[], int i, int n);

#include <bits/stdc++.h> // Provides standard library
#include <cctype> //Provides isdigit function
#include <string>  // Provides string
#include <cstdlib> // Provides EXIT_SUCCESS
#include <stdio.h> // Provides input and output
#include <iostream> // Provides cout and cin
using namespace std; // Allows all Standard Library items to be used
void menu()
{
   // Postcondition: The menu functions are displayed and the users
   // can toggle through options. Option 4 quits the menu
   cout << "\n1. Read class size\n";
   cout << "2. Read class grades\n";
   cout << "3. Compute class average\n";
   cout << "4. Quit program\n";
}
    //Precondition: The integer i and n are greater than -1 and the array arr is not empty
    //Postcondition: A double value is returned as the average of the grade values
double averageGardes(int arr[], int i, int n)
{
    if (i == n-1)
    //Precondition: i is equal to the total number of grades-1
    //Postcondition: The value of arr[i] is returned
    {
        return arr[i]; // The value of array at i is returned. This is the last value of the array
    }
    if (i==0)
    //Precondition: i is equal to zero
    //Postcondition: This is the base case
    {
        return ((arr[i] + averageGardes(arr, i+1, n))/n);//The grade is returned
    }
    //This is the recursive function being called
    return (arr[i] + averageGardes(arr, i+1, n));
}
int main()
{
	int choice,size,i;
    int option;
    int *arr;
    while(1)
    {
       menu(); // Menu function is called to display menu
       cout << "Enter your choice: "; // Prompt to ask user for choice
       cin >> choice; // Reads in choice
       switch (choice)
       {
       case 1: 
       //Precondition: The user picks option 1
       //Postcondition: The user enters the size of class for the number of grades
       {
           cout << "Enter class size:  "; // Prompt to ask user for class size
           cin >> size; //Size is read in
           arr = new int[size];
           break;
       }
       case 2: 
       //Precondition: The user picks option 2
       //Postcondition: The user enters the grades between 0 and 100
       {
           cout << "Enter class grades (Between 0 and 100): " << endl; // Prompt to ask user for grades
           for(i=0;i<size;i++)
           {
               cout << "Grade " << i << ": ";
               cin >> option; // Grade is read in
                //Precondition: User enters a grade greater than or equal to 0
                //Postcondition: The user enters a valid new number and stores in the array
               if(option >= 0)
               {
                   //Precondition: User enters a grade less than 101
                    //Postcondition: The user enters a valid new number and stores in the array
                   if(option < 101)
                   {
                       arr[i] = option; //Value is read into the array
                   }
                   else
                     //Precondition: The grade is greater than 100 and less than 0
                    //Postcondition: The grade is stored in the array and the value is stored  
                   {
                        cout << "Try a valid value" << endl;
                        cout << "New Grade " << i << ":" << endl;
                        cin >> option;
                        arr[i] = option; //New grade is read into the array
                   }
               }
               
               
               else 
               {
                        cout << "Try a valid value" << endl;
                        cout << "New Grade " << i << ":" << endl;
                        cin >> option;
                        arr[i] = option;
               }
               /*
               do
               {
                cout << "Grade " << i << ": ";
                cin >> option; // Grade is read in
                //Precondition: User enters a grade greater that 100 or less than 0
                //Postcondition: The user enters a valid new number and stores in the array
                if(isdigit(option))
                {
                    cout << "Try a valid value" << endl;
                    //cin >> option;
                }
               }
                while(isdigit(option)); 
                /
                //Precondition: The grade is greater than 100 and less than 0
                //Postcondition: The grade is stored in the array and the value is stored
                if(option < 0 || option > 100)
                {
                    cout << "Try a valid value" << endl;
                    cout << "New Grade " << i << ":" << endl;
                    arr[i] = option;
                }
                //Precondition: The grade is greater than -1 and less than 101
                //Postcondition: The grade is stored in the array
                else
                {
                    arr[i] = option; // The option value is stored in the array at i
                }   
                */
           }
           break;
       }
       case 3: 
       {
           cout << "You entered class size: " << size <<endl; // Prompt to display the class size the user enter
           cout << "You entered grades:     "; 
           //Precondition: The array has been filled with grades
           //Postcondition: The grades in the array are printed
           for(i=0;i<size;i++)
           {
                cout << arr[i] << " "; // The array is printed out
           }
           cout << fixed << setprecision(2);
           cout << "\nClass average:          " << averageGardes(arr,0,size)<<endl;//The class average is calaculated and the recursive function is called
           break;
       }
       case 4: 
       //Postcondition: The program quits
       {
           exit(0);
           cout << "Thank you\n";
           break;
       }
       default: 
       {
           printf("Wrong Input\n"); // Wrong input is displayed if the user enters an invalid value
       }
    }
}
	return 0;
}

