#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main() {
    string command;
    int n;
    deque<int> deck;
    while (true) {
        cin >> command;
        if (command == "exit") {
            cout << "bye" << endl;
            break;
        }
        if (command == "push_front") {
            cin >> n;
            deck.push_front(n);
            cout << "ok" << endl;
        }
        if (command == "push_back") {
            cin >> n;
            deck.push_back(n);
            cout << "ok" << endl;
        }
        if (command == "pop_front") {
            if (!deck.empty()){
                cout << deck.front() << endl;
                deck.pop_front();
            }
            else{
                cout << "error" << endl;
            }
        }
        if (command == "pop_back") {
            if (!deck.empty()){
                cout << deck.back() << endl;
                deck.pop_back();
            }
            else{
                cout << "error" << endl;
            }
        }
        if (command == "back") {
            if (!deck.empty()){
                cout << deck.back() << endl;
            }
            else{
                cout << "error" << endl;
            }
        }
        if (command == "front") {
            if (!deck.empty()){
                cout << deck.front() << endl;
            }
            else{
                cout << "error" << endl;
            }
        }
        if (command == "size") {
            cout << deck.size() << endl;
        }
        if (command == "clear") {
            deck = deque<int>();
            cout << "ok" << endl;
        }
    }
}