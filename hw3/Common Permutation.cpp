#include<bits/stdc++.h>
using namespace std;
int main() {
    string first,second;
    while(getline(cin,first) && getline(cin,second)) {
        int c1[26], c2[26];
        for(int i = 0; i < 26; i++) {
            c1[i] = 0;
            c2[i] = 0;
        }
        for(int i = 0; i < first.length(); i++)
            c1[first[i]-'a']++;
        for(int i = 0; i < second.length(); i++)
            c2[second[i]-'a']++;
        for(int i = 0; i < 26; i++) {
            while(c1[i]-- && c2[i]--)
                cout <<  (char)(i+97);
        }
        cout << endl;
    }
}