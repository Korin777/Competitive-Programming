#include<bits/stdc++.h>
#include<map>
using namespace std;
int main() {
    int irregular,cases;
    cin >> irregular >> cases;
    map<string,string> irr;

    for(int i = 0; i < irregular; i++) {
        string a,b;
        cin >> a >> b;
        irr.insert(pair<string,string>(a,b));
    }
    for(int i = 0; i < cases; i++) {
        string word;
        cin >> word;
        int l = word.length()-1;
        if(irr.find(word) != irr.end())
            cout << irr.find(word)->second;
        else if(word[l] == 'o' || word[l] == 'x' || word[l] == 's') {
            cout << word << "es";
        }
        else if((word[l-1] == 'c' && word[l] == 'h') || (word[l-1] == 's' && word[l] == 'h')) {
            cout << word << "es";
        }
        else if((word[l-1]!='a' && word[l-1]!='e' && word[l-1]!='i' && word[l-1]!='o' && word[l-1]!='u') && word[l] == 'y') {
            word[l] = 'i';
            cout << word << "es";
        }
        else {
            cout << word << 's';
        }
        cout << endl;
    }
}