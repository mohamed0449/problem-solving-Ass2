// File: A2_S11_20220449_5.cpp
// Purpose: solve task 1
// Author: Mohamed Gomaa Mohamed
// Section: S11
// ID: 20220449
// TA: Samar Sabry
// Date: 28 Oct 2023

#include <bits/stdc++.h>
#define fudou cin.tie(0),cout.tie(0),cin.sync_with_stdio(0),cout.sync_with_stdio(0);
#define ll long long
#define M ll r;cin>>r;while(r--)
#define yes cout<<"YES"<<E;
#define no cout<<"NO"<<E;
#define fre freopen("lettercasepermutation.in", "r", stdin);
using namespace std;

// Structure to represent a player with their name and scores
struct Player {
    string name;
    vector<int> scores;
    Player(string playerName) : name(playerName) {}
};
// Function to add a new score to the player's list of scores
void addScore(Player& player, int score) {
    player.scores.push_back(score);
    sort(player.scores.rbegin(), player.scores.rend()); // Sort in descending order
}
// Function to print the top 10 players and their scores
void printTop10(const vector<Player>& players) {
    cout << "Top 10 Players and Scores:" << endl;
    for (const Player& player : players) {
        if (!player.scores.empty()) {
            cout << player.name << ": ";
            for (int score : player.scores) {
                cout << score << ", ";
            }
            cout << endl;
        }
    }
}
// Function to find a player by name in the list of players
Player* findPlayerByName(vector<Player>& players, const string& playerName) {
    for (Player& player : players) {
        if (player.name == playerName) {
            return &player;
        }
    }
    return nullptr;
}
int main() {
    vector<Player> players;
    int choice;
    do {
        cout << "Menu:" << endl;
        cout << "1. Add a new player and score" << endl;
        cout << "2. Print the top 10 players and scores" << endl;
        cout << "3. Find a player's highest score" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                string playerName;
                int score;
                cout << "Enter player name: ";
                cin >> playerName;
                cout << "Enter player score: ";
                cin >> score;
                Player* player = findPlayerByName(players, playerName);
                if (player) {
                    addScore(*player, score);
                } else {
                    Player newPlayer(playerName);
                    addScore(newPlayer, score);
                    players.push_back(newPlayer);
                }
                if (players.size() > 10) {
                    // Sort players based on the highest score and remove the lowest scorer
                    sort(players.begin(), players.end(),[](const Player& a, const Player& b) {
                            return (a.scores.empty() ? 0 : a.scores[0]) > (b.scores.empty() ? 0 : b.scores[0]);
                        });
                    players.pop_back();
                }
                break;
            }
            case 2:
                printTop10(players);
                break;
            case 3: {
                string playerName;
                cout << "Enter player name: ";
                cin >> playerName;
                Player* player = findPlayerByName(players, playerName);
                if (player) {
                    if (!player->scores.empty()) {
                        cout << playerName << "'s highest score: " << player->scores[0] << endl;
                    } else {
                        cout << playerName << " has no recorded scores." << endl;
                    }
                } else {
                    cout << playerName << " is not in the top 10 list." << endl;
                }
                break;
            }
            case 4:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    } while (choice != 4);
    return 0;
}
