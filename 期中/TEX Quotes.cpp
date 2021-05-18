#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    bool first = true;
    while(getline(cin,s)) {
        for(int i = 0; i < s.length(); i++) {
            if(char(s[i]) == '"') {
                if(first) {
                    cout << "``";
                    first = !first;
                }
                else {
                    cout << "''";
                    first = !first;
                }
                
            }
            else {
                cout << s[i];
            }
        }
        cout << endl;
    }
}