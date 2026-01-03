/*
Author: Farhan Nadim Iqbal, Sumit Roy Chowdhury
GitHub: @ryancantrell321 || @Sumitrc31
Date: January 03, 2026

Topic: CLI game development project for CSE-2212

Course: Computer Algorithms and Complexity Sessional
Course Code: CSE-2212
Course Teacher: Ameya Debnath
Institution: Leading University, Sylhet

Language: C++ 20
IDE: JetBrains CLion 2025.3
License: The MIT License (MIT)

Special Note: Assistance taken from AmazonQ for words dictionary's user input validation through vector pushback method

*/

#include <bits/stdc++.h>
#include "initialization.h"
#include "display.h"
using namespace std;

int main() {

    intro();
    menu();

    int choice = 0, score = 0;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {

        case 1:
            play_game();
            break;


        case 2:
            help();
            break;

        case 3:
            exit(0);

        default:
            cout << "Invalid choice" << endl;

    }



    return 0;
};
