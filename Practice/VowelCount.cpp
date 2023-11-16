// Problem Statement

// Mukesh is building a language translation program. He needs to implement a program that counts the number of words in a sentence entered by the user. Use the pointer-to-pointer concept to iterate through the sentence and count the vowels.

// Note: This is a sample question asked in an Amcat interview.
// Input format :

// The input consists of a list of words/sentences.
// Output format :

// The output prints the count of the vowels that are present in the given sentence/sentences.
// Code constraints :

// 1 <= Total number of characters in the sentence(s) <= 1000

// The vowels are not case-sensitive.
// Sample test cases :
// Input 1 :

// Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed pretium risus eu dolor laoreet, id suscipit enim bibendum.

// Output 1 :

// 42

#include <iostream>
using namespace std;

void countVowels(char **sentence)
{
    int count = 0;
    while (**sentence != '\0')
    {
        switch (**sentence)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            count++;
        }
        (*sentence)++;
    }
    cout << count << endl;
}
int main()
{
    char sentence[1000];
    cin.getline(sentence, 1000);
    char *ptr = sentence;
    char **ptrptr = &ptr;
    countVowels(ptrptr);
    return 0;
}