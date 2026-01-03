#include <bits/stdc++.h>
using namespace std;

void line(int length) {
    for (int i = 0; i < length; i++) {
        cout << "-";
    }
    cout << endl;
}

void menu() {
    cout << "1. Play" << endl;
    cout << "2. Help and Commands" << endl;
    cout << "3. Exit" << endl;
}

void intro() {
    line(70);
    cout << setfill(' ') << setw(35) << "GUESS MASTER" << endl;
    cout << setfill(' ') << setw(35) << "Version 1.0" << endl;
    cout << setfill(' ') << setw(53) << "A console based guessing game, based on C++" << endl;
    cout << setfill(' ') << setw(50) << "Made by: @ryancantrell321 | @Sumitrc31" << endl;
    line(70);
    cout << "If this is your first time playing this game, press 2 to view the instructions" << endl;

}

void help() {

    cout << "Memorize the word sequence and repeat it!"  << endl<< endl;
    cout << "Each round adds one more word." << endl;
    cout << "Words are randomly selected from 100 options." << endl;
    cout << "Note: Answers are case-insensitive." << endl;
    line(70);
}