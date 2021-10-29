// Name: <Bukky Adekunle>
// Class: CS 3305/Section#3
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 4
#include <bits/stdc++.h>
#include <stdlib.h>
#include <stdio.h>
#include <stack> // Provides stack template
#include <iostream> // Provides cout and cin
#include <string>

using namespace std;
stack<int>newStack; // new int stack is created
stack<double>doubStack; // new double stack is created
stack<string>stringStack; // new string stack is created
stack<int>intStack; // new int stack is created


template <class T> 
// template print stack method created. printStack willl be called for all the stacks used in the main
void printStack(stack<T>s)
{
    while(!s.empty()) // s is not empty
{
    T data = s.top(); // Assigning the top of the stack to type T of data
    s.pop(); // popping what is currently at the top of stack
    cout << data << " ";
   // s.push(data);
}
}
template <class T> 
// template clear stack method created. clearStack willl be called for all the stacks used in the main
void clearStack(stack<T>&s)
{
    while(!s.empty()) // s is not empty
    {
        s.pop(); // remove the top element
    }
}

void topToButtom(stack<int>stack)
{
    while(!stack.empty()) // Stack is not empty
    {
        int s1 = stack.top(); // get the top element
        stack.pop(); // remove the top element
        cout << s1 << " ";
        newStack.push(s1); // insert the data back to stack
    }
    while(!newStack.empty()) // newStack is not empty
    {
        int s1 = newStack.top(); // get the top element
        newStack.pop(); // remove the top element
        stack.push(s1); // insert the data back to stack
    }
  
}
void  buttonToTop(stack<double>stack)
{
    while(!stack.empty()) // Stack is not empty
    {
        doubStack.push(stack.top()); // insert the top of stack into doubStack
        stack.pop(); // remove the top element
    }
    while(!doubStack.empty()) // doubStack is not empty
    {
        double d1 = doubStack.top(); // get the top element
        cout << d1 << " ";
        doubStack.pop(); // remove the top element
        stack.push(d1); // insert the data back to stack
    }
    
}
void flipStack(stack<string>stack)
{
    while(!stack.empty()) // Stack is not empty
    {
        stringStack.push(stack.top()); // insert the top of stack into stringstack
        stack.pop(); // remove the top element
    }
    while(!stringStack.empty()) // stringStack is not empty
    {
        string d1 = stringStack.top(); // get the top element
        cout << d1 << " ";
        stringStack.pop(); // remove the top element
        stack.push(d1); // insert the data back to stack
    }
}
bool searchStack(stack<int>stack, int target) 
{
    while(!stack.empty()) // Stack is not empty
    {
        intStack.push(stack.top()); // insert the data back to stack
        stack.pop(); //remove top element
    }
    while(!intStack.empty()) // intStack is not empty
    {
        if(intStack.top() == target) // top element of s is target, return true
        return true;
        // top element of s is not target

        int data = intStack.top(); // get the top element
        intStack.pop(); // remove the top element
        bool result = searchStack(stack, target); // search for target in modified stack
        stack.push(data); // insert the data back to stack
        return result;
    
    }  // stack is empty, target not found
    return false;
}

int main()
{
    stack<int>numberStack; //new integer stack created
    stack<double> gradeStack; //new double stack created
    stack<string> nameStack; //new string stack created
    stack<int> nStack; //new integer stack created
    int option;
    int target;
    int countNum;
    do
    {
        clearStack(numberStack); //The stack is cleared each time the main menu is displayed
        clearStack(gradeStack);//The stack is cleared each time the main menu is displayed
        clearStack(nameStack); //The stack is cleared each time the main menu is displayed
        clearStack(nStack); //The stack is cleared each time the main menu is displayed
        cout<<"-----MAIN MENU-----"<<endl;
        cout << "1. Test function topToButtom with integer stack" << endl;
        cout << "2. Test function buttonToTop with double stack" << endl;
        cout << "3. Test function flipStack with string stack" << endl;
        cout << "4. Test function searchStack with integer stack" << endl;
        cout << "5. Exit program" << endl;
        
        cout << "Enter option number: "<< endl; // prompt to enter an option
        cin >> option; // option is read into the system
        
        switch(option)
        {
            case 1:
                cout << "How many numbers would you like to enter?" << endl; // prompt to enter the number of numbers
                cin >> countNum; // number is read in
                cout<< "Enter numbers to fill the stack: " << endl; //Prompt to enter the amount of numbers based on countNum
                for(int i = 0; i<countNum; i++)
                {
                    cout<< "Enter number " << i << ": "; //prompt to enter number at i
                    int data; 
                    cin >> data; // number is read in
                    numberStack.push(data); // user input is pushed into stack
                }
                cout << "Testing function topToButtom: " << endl;
                cout << "Stack content: " << setw(5); 
                printStack (numberStack); // stack is printed unto the screen
                cout << " " << endl;
                cout << "Function output: " << setw(3);
                topToButtom(numberStack); // topToButtom method is called and displayed unto the screen
                cout << " " << endl;
            break;
            
            case 2:
                cout << "How many double numbers would you like to enter?" << endl; // prompt to enter the number of numbers
                cin >> countNum; // number is read in
                cout<< "Enter numbers to fill the stack: " << endl; //Prompt to enter the doubles based on countNum
                for(int i = 0; i<countNum; i++)
                {
                    cout<< "Enter number " << i << ": "; //prompt to enter number at i
                    double data;
                    cin >> data; // user input is read in
                    gradeStack.push(data);// user input is pushed into stack
                }
                cout << "Testing function buttomToTop: " << endl;
                cout << "Stack content: " << setw(5);; 
                printStack (gradeStack); //printStack function is called on gradeStack
                cout << endl;
                cout << "Function output: " << setw(3);
                buttonToTop(gradeStack); //gradeStack is rearranged and displayed on the screen
                cout << " " << endl;
            break;
            
            case 3:
                cout << "How many names would you like to enter?" << endl; // prompt to enter the number of names
                cin >> countNum;  // number is read in
                cout<< "Enter names to fill the stack: " << endl; //Prompt to enter the names based on countNum
                for(int i = 0; i<countNum; i++)
                {
                    cout<< "Enter name " << i << ": "; // prompt to enter the name
                    string data;
                    cin >> data; // user input is read in
                    nameStack.push(data); // user input is pushed into the stack
                }
                cout << "Testing function flipStack: " << endl;
                cout << "Stack content before calling flipStack: " << setw(2); 
                printStack (nameStack); // The names entered by the user are displayed with the printStack
                cout << " " << endl;
                cout << "Stack content after calling flipStack: " << setw(4);
                flipStack(nameStack); // The stack is flipped and displayed using flipStack
                cout << " " << endl;
            break;
            
            case 4:
                cout << "How many numbers would you like to enter?" << endl; // prompt to enter the number of numbers
                cin >> countNum; // number is read in
                cout<< "Enter numbers to fill the stack: " << endl; // promt to enter the numbers based on countNum
                for(int i = 0; i<countNum; i++)
                {
                    cout<< "Enter number " << i << ": "; //prompt to enter each number
                    int data;
                    cin >> data; // user input is read in
                    nStack.push(data); // user input is pushed into the stack
                }
                cout << "Enter the target number: " << endl; // prompt for user to enter a target number
                cin >> target; // target is read in
                cout << "Testing function searchStack: " << endl;
                cout << "Stack content: " << setw(4); 
                printStack(nStack); // nStack is printed out
                cout << endl;
                cout << "Target: " << setw(11) << target;
                cout << endl;
                cout << "Function output: " << setw(6);
                // if statement to determine if true or false
                if (searchStack(nStack, target) == true)
                {
                    cout << "True";
                } 
                else
                {
                    cout << "False";
                }
                cout << endl;
            break;
            
            case 5:
            break;
            
           default:
           cout << "Invalid choice" << endl;
           break;
        }
    }   
     while(option!=5);
       return 0; 
    } 
    
    


