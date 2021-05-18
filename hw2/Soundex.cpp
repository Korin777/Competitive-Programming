#include<bits/stdc++.h>
using namespace std;

int main() {
    char word[30];
    while(cin >> word) {
        int previous = 0;
        for(int i = 0; i < 30; i++) {
            if(word[i] == '\0')
                break;
            else if(word[i] == 'B' || word[i] == 'F' || word[i] == 'P' || word[i] == 'V') {
                if(previous != 1) {
                    cout << 1;
                    previous = 1;
                }
            }
            else if(word[i] == 'C' || word[i] == 'G' || word[i] == 'J' || word[i] == 'K' || word[i] == 'Q' || word[i] == 'S' || word[i] == 'X' || word[i] == 'Z') {
                if(previous != 2) {
                    cout << 2;
                    previous = 2;
                }
            }
            else if(word[i] == 'D' || word[i] == 'T') {
                if(previous != 3) {
                    cout << 3;
                    previous = 3;
                }
            }
            else if(word[i] == 'L') {
                if(previous != 4) {
                    cout << 4;
                    previous = 4;
                }
            }
            else if(word[i] == 'M' || word[i] == 'N') {
                if(previous != 5) {
                    cout << 5;
                    previous = 5;
                }
            }
            else if(word[i] == 'R') {
                if(previous != 6) {
                    cout << 6;
                    previous = 6;
                }
            }
            else
                previous = 0;
        }
        cout << endl;
    }
}