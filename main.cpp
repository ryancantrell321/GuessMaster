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
