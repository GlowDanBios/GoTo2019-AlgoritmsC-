#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){
    int n;
    string a;
    cin >> n;
    set <char> letters;
    for (int i = 0; i<n; i++){
        cin >> a;
        for (int i = 0; i < a.size(); i++){
            letters.insert(a[i]);
        }
    }
    string k;
    for (auto i : letters){
        k += i;
    }
    cout << k << endl;
}