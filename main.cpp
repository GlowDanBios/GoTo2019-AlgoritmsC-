#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main(){
    string command;
    int n;
    priority_queue <int, vector<int>, less<int>> nums;
    while (cin >> command){
        if (command == "CLEAR"){
            if (!nums.empty()){
                nums = priority_queue <int, vector<int>, less<int>>();
            }
        }
        if (command == "ADD") {
            cin >> n;
            nums.push(n);
        }
        if (command == "EXTRACT"){
            if (nums.empty()) {
                cout << "CANNOT" << endl;
            }
            else {
                cout << nums.top() << endl;
                nums.pop();
            }
        }
    }
}