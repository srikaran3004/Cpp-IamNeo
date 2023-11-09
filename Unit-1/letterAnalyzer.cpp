// Vasanth is developing a letter analyzer program that determines whether a given character is a vowel or a consonant. The program utilizes the LetterAnalyzer class to analyze the input character and provide the corresponding analysis result. 


// Create an enum class called LetterType with vowel, consonant and invalid.


// Write a program that takes a single character as input from the user and determines whether it is a vowel or a consonant. Your program should display "vowel" if the character is one of the vowels (a, e, i, o, u, A, E, I, O, U) and "consonant" otherwise.


// Note: This is a sample question asked in an HCL interview.
// Input format :

// The input consists of a character.
// Output format :

// If the input is a vowel, the output displays "vowel".

// If the input is a consonant, the output displays "consonant".

// Otherwise, the output displays "Invalid input".


// Refer to the sample output for formatting specifications.
// Code constraints :

// The input considers lower-case and upper-case letters as vowels and consonants.
// Sample test cases :
// Input 1 :

// a

// Output 1 :

// vowel

// Input 2 :

// Z

// Output 2 :

// consonant

// Input 3 :

// 1

// Output 3 :

// Invalid input

// Input 4 :

// ?

// Output 4 :

// Invalid input


#include <iostream>
using namespace std;

enum class LetterType {
    vowel,
    consonant,
    invalid
};

class LetterAnalyzer {
public:
    LetterType analyze(char c) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            return LetterType::vowel;
        } else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            return LetterType::consonant;
        } else {
            return LetterType::invalid;
        }
    }
};

int main() {
    LetterAnalyzer analyzer;
    char c;
    cin >> c;
    LetterType type = analyzer.analyze(c);
    switch (type) {
        case LetterType::vowel:
            cout << "vowel" << endl;
            break;
        case LetterType::consonant:
            cout << "consonant" << endl;
            break;
        case LetterType::invalid:
            cout << "Invalid input" << endl;
            break;
    }
    return 0;
}
