#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
    string command;
    int n;
    stack <int> steck;
    while (true){
        cin >> command;
        if (command == "exit") {
            cout << "bye" << endl;
            break;
        }
        if (command == "push") {
            cin >> n;
            steck.push(n);
            cout << "ok" << endl;
        }
        if (command == "pop") {
            cout << steck.top() << endl;
            steck.pop();
        }
        if (command == "back") {
            cout << steck.top() << endl;
        }
        if (command == "size") {
            cout << steck.size() << endl;
        }
        if (command == "clear") {
            steck = stack<int>();
            cout << "ok" << endl;
        }
    }
}