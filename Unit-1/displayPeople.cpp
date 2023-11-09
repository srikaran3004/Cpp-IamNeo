// There was a massive tsunami in Kanyakumari. The buildings and other property were destroyed and valued at millions of dollars. While some of them were hurt and only a handful were safe, many people lost their lives. A news reporter shows up at the scene to assess the scenario involving the people who are alive, dead, and injured. He intended to publish it in the press and ask other nations to assist the affected citizens. Could you kindly write a program to generate a newspaper story to support him in this admirable cause?


// Note: This is sample question asked in a Wipro interview.
// Input format :

// The input consists of three integers on separate lines corresponding to the number of people who are dead, injured, and safe.
// Output format :

// The output displays the number of people who are dead, injured, and safe.


// Refer to the sample output for formatting specifications.
// Sample test cases :
// Input 1 :

// 4000
// 5000
// 10000

// Output 1 :

// 1)Dead: 4000
// 2)Injured: 5000
// 3)Safe: 10000
// Please help the people who are suffering!!!

// Input 2 :

// 2000
// 3000
// 9000

// Output 2 :

// 1)Dead: 2000
// 2)Injured: 3000
// 3)Safe: 9000
// Please help the people who are suffering!!!


#include<iostream>
using namespace std;

int main(){
    int dead,injured,safe;
    cin>>dead>>injured>>safe;
    cout<<"1)Dead:"<<dead<<"\n2)Injured:"<<injured<<"\n3)Safe:"<<safe;
    cout<<"\nPlease help the people who are suffering!!!";
    return 0;
}