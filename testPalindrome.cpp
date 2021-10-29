// Name: <Bukky Adekunle>
// Class: CS 3305/Section#3
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 4
#include <cassert> // Provides assert
#include <cctype> // Provides isalpha, toupper
#include <cstdlib> // Provides EXIT_SUCCESS
#include <iostream> // Provides cout and cin
#include <queue> // Provides queue template class
#include <stack> // Provides stack template class
#include <string> // Provides string
using namespace std;

// This function checks for palindromic sentences based on words
int palindromeByWord() {
        cout << "You selected:\t Option 2\n";
        string sentence; // For getting the full sentence
        string word; // For individual word in sentence
        char letter; // For each letter in sentence
        queue<string> q; // queue of string/word
        stack<string> s; // stack of string/word
        cout << "Enter the text:  "; // Asking for user input
        getline(cin, sentence); // Taking the input

        // Loop through each char in sentence
        for (int i=0; i<sentence.size(); i++) 
        {
                letter = sentence[i]; // get that letter
                // Check if that's an alphabet, if yes then add to next word
                if (isalpha(letter)) word += toupper(letter);
                // If this char is space or last char then add the word till now to stack/queue and empty the word for further operations
                if (letter == ' ' || i == sentence.size()-1) {
                        q.push(word);
                        s.push(word);
                        word.clear(); // clear the word empty
                }
        }
        cout << "You entered:\t " << sentence << endl;
        // Compare fromt and top entry of queue and stack
        // If they mistmatch return with EXIT_FAILURE
        while (!q.empty() && !s.empty()) {
                if (q.front() != s.top())
                {
                        cout << "Judgment:\t Not a palindrome!.\n";
                        return EXIT_FAILURE;
                }
                q.pop();
                s.pop();
        }
        cout << "Judgment:\t Palindrome.\n";
        return EXIT_SUCCESS;

}

// This function checks for palindromic sentences based on characters
int palindromeByChar()
{
        cout << "You selected:\t Option 1\n";
        string sentence; // For getting the full sentence
        char letter; // For each letter in sentence
        queue<char> q; // queue of string/word
        stack<char> s; // stack of string/word
        cout << "Enter the text:  "; // Asking for user input
        getline(cin, sentence); // Taking user input

        for (int i = 0; i < sentence.size(); i++) 
        {
                letter = sentence[i];

                if (isalpha(letter)) {
                        q.push(toupper(letter));
                        s.push(toupper(letter));
                }
        }
        cout << "You entered:\t " << sentence << endl;
        while (!q.empty() && !s.empty()) 
        {
                if (q.front() != s.top())
                {
                        cout << "Judgment:\t Not a palindrome!.\n";
                        return EXIT_FAILURE;
                }
                q.pop();
                s.pop();
        }
        cout << "Judgment:\t Palindrome.\n";
        return EXIT_SUCCESS;
}

// This function returns choice depending on menu
int menu() {
        cout << "1. Test character-by-character palindrome.\n";
        cout << "2. Test word-by-word palindrome.\n";
        cout << "3. Quit program.\n";
        int choice;
        cin >> choice;
        cin.ignore(); // clear the buffer
        return choice;
}

int main() {
        bool exit = false;
        int choice;
        while (!exit) 
        {
                choice = menu();
                
                if (choice == 1) {
                        palindromeByChar();
                        cout << "---------------------------------------------------------------\n";
                }
                else if (choice == 2) {
                        palindromeByWord();
                        cout << "---------------------------------------------------------------\n";
                }
                else exit = true;
        }
        return EXIT_SUCCESS;
}