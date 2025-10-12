/*
Name: Muhammad Hamza Khan
Student ID: 2502941
Assignment: 1
Question: 1
*/

#include <iostream>
using namespace std;

int main() {
    char uppercase;
    
    cout << "Enter an uppercase alphabet: ";
    cin >> uppercase;
    
 
    char lowercase = uppercase | 32;
    
    cout << "Output: " << lowercase << endl;
    
    return 0;
}