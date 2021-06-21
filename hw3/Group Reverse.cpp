#include<bits/stdc++.h>
using namespace std;

int main() {
    int p;
    while(true) {
        cin >> p;
        if(p == 0)
            break;
        string line;
        cin >> line;
        int num = line.length() / p;
        for(int i = 0; i < p; i++) {
            for(int j = num*(i+1); j > num*i ; j--) {
                cout << line[j-1];
            }
        }
        cout << endl;
    }
}