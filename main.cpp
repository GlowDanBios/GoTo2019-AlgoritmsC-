#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
    stack <char> opened;
    stack <char> firsttype;
    stack <char> secondtype;
    stack <char> thirdtype;
    string str;
    cin >> str;
    char b;
    if (str[0] == ')' or str[0] == ']' or str[0] == '}'){
        cout << "no" << endl;
        return 0;
    }
    for (int i = 0; i< str.size(); i++){
        b = str[i];
        if (b == ')'){
            if (!opened.empty()){
                if (opened.top() == '(') {
                    opened.pop();
                    continue;
                }
                        else{
                    cout << "no" << endl;
                    return 0;
                }
            }

        }
        if (!opened.empty()){
            if (b == ']'){
                if (opened.top() == '[' and !opened.empty()){
                    opened.pop();
                    continue;
                }
                else{
                    cout << "no" << endl;
                    return 0;
                }
            }
        }
        if (!opened.empty()){
            if (b == '}'){
                if (opened.top() == '{' and !opened.empty()){
                    opened.pop();
                    continue;
                }
                else{
                    cout << "no" << endl;
                    return 0;
                }
            }
        }

        opened.push(b);
    }
    if (opened.empty()){
        cout << "yes" << endl;
    }
    else{
        cout << "no" << endl;
    }

}