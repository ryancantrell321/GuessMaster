//
// Created by nadee on 03/01/2026.
//


#include <bits/stdc++.h>
#include <chrono>
#include <thread>

using namespace std;

void delay(int secs) {
    this_thread::sleep_for(chrono::seconds(secs));
}


void clear_screen() {
    for(int i = 0; i < 50; i++) cout << endl;
}

void enter_to_continue() {
    cout << "Press enter to continue...";
    cin.get();
}

vector<string> wordPool = {
    "apple", "banana", "cherry", "dragon", "elephant",
    "falcon", "guitar", "hammer", "island", "jungle",
    "kettle", "lemon", "mountain", "novel", "ocean",
    "piano", "queen", "robot", "sunset", "tiger",
    "umbrella", "valley", "wizard", "xylophone", "yellow",
    "zebra", "anchor", "bridge", "castle", "desert",
    "engine", "forest", "garden", "harbor", "igloo",
    "jacket", "kingdom", "ladder", "mirror", "notebook",
    "orange", "pencil", "quartz", "river", "silver",
    "table", "universe", "village", "window", "yoyo",
    "arrow", "basket", "candle", "diamond", "emerald",
    "flower", "globe", "helmet", "insect", "journal",
    "kitten", "laptop", "magnet", "needle", "owl",
    "parrot", "quilt", "rocket", "sword", "tornado",
    "unicorn", "violin", "wallet", "yarn", "zephyr",
    "battery", "camera", "dolphin", "eagle", "fossil",
    "glacier", "honey", "iceberg", "jaguar", "koala",
    "lizard", "melody", "nebula", "oasis", "penguin",
    "pyramid", "rabbit", "sphinx", "thunder", "vulture",
    "whale", "crystal", "dream", "flame", "lightning"
};
bool ask_play_again() {
    cout << "Do you want to play again? (yes/no): ";
    string choice;
    cin >> choice;
    transform(choice.begin(), choice.end(), choice.begin(), ::tolower);
    return (choice == "y" || choice == "yes");
}

//==> Random algorithm
string random_pick(vector<string> wp) {
    int randomIndex = rand() % wp.size();
    return wp[randomIndex];
}

//=> Game logic
void play_game() {
    srand(time(nullptr));
    cin.ignore();
    cout << "Playing game..." << endl;
    enter_to_continue();

    vector<string> pushed_words;
    for (int i = 0; i < 4; i++) pushed_words.push_back(random_pick(wordPool));
    int x = 0;
    while (x < 3) {
        cout << "Memorize these words: " << endl;
        for (int i = 0; i < pushed_words.size(); i++) cout << pushed_words[i] << " ";
        cout << endl;
        delay(4);
        clear_screen();

        string y;
        cout << "Enter the words you remembered (space separated): " << endl;
        getline(cin, y);

        transform(y.begin(), y.end(), y.begin(), ::tolower);
        stringstream ss(y);
        string z;
        vector<string> u_inp;

        while (ss >> z) u_inp.push_back(z);

        if (u_inp == pushed_words) {
            cout << "Correct!" << endl;
            if (ask_play_again()) {
                play_game();
            }
            return;
        }
        else {
            x++;
            if (x < 3) {
                cout << "Incorrect! Try again!" << endl;
                cout << "You have " << 3 - x << " tries left." << endl;
                enter_to_continue();
                delay(2);
                clear_screen();
            }

        }

    }

    cout << "3 tries failed. Game over!" << endl;
    if (ask_play_again()) {
        play_game();
    }
}

