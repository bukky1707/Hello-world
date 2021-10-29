// Name: <Bukky Adekunle>
// Class: CS 3305/Section#3
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 5

//int isVowel(char ch);
//int countVowels(string str, int n);
//int menu();

#include <cctype> //Provides toupper function
#include <string> //Provides string 
#include <cstdlib> // Provides EXIT_SUCCESS
#include <stdio.h> // Provides input and output
#include <iostream> //Provides cout and cin

using namespace std; // Allows all Standard Library items to be used
int isVowel(char ch)
//Precondition: ch is of type character
//Postcondition: The number of vowels are counted
{
    ch = toupper(ch); //This converts the character to upper case
    //Precondition: ch is a vowel character
    //Postcondition: The number of vowels are counted in increments of 1
    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        return 1; 
    
    //Precondition: ch is a consonant character
    //Postcondition: 0 is returned
    else
        return 0;
}
int countVowels(string str, int n)
{
    //Precondition: The string is of length 0
    //Postcondition: Zero is returned because there are no values
    if(n==0)
    {
        return 0;
    }
    //Precondition: The string is of length 1
    //Postcondition: The first letter is returned and counted if it is a vowel
    if(n==1)
    {
        return isVowel(str[0]);
    }
    //The recursive function is returned
    return countVowels(str, n-1) + isVowel(str[n-1]);
}
int menu()
{
        // Postcondition: The menu functions are displayed and the users
        //  can toggle through options. Option 3 quits the menu
        string option;
        cout << endl;
        cout <<"-----MAIN MENU-----" << endl;
        cout <<"1. Read input string" << endl;
        cout <<"2. Compute number of vowels" << endl;
        cout <<"3. Exit program" << endl;
        cout << endl;
        
        cout <<"Enter option number:" << endl; //Prompt to enter option
        getline(cin, option); //Prompt to read in option
        return stoi(option); //Prompt to return the string option converted to integer
}
int main()
{
    int option;
    string sentence;
    while (option!=3)
    {
        option = menu();
        switch(option)
        {
            case 1:
            //Precondition: The user picks option 1
            //Postcondition: The user enters the string to be evaluated
            {
                cout << "Enter the string: " << endl; //Prompt to enter the string
                getline(cin, sentence);
                break;
            }
            case 2:
            //Precondition: The user picks option 2
            //Postcondition: The number of vowels is counted in the entered string
            {
                cout << "You entered string: " << sentence << endl;
                cout << "Number of vowels:   " << countVowels(sentence, sentence.length()) << endl; //Number of vowels in the entered string is calculated
                cout << endl;
                break;
            }
            case 3:
            //Precondition: The user picks option 3
            //Postcondition: The menu quits
            {
                cout << "Thank you" << endl;
                break;
            }
            default:
            //Precondition: The user picks an invalid option
            //Postcondition: The user enters a new menu option
            {
                cout << "Invalid option" << endl;
            }
        }
    }
        return EXIT_SUCCESS;
}
	
