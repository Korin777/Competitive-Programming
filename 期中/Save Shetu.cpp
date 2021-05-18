#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int total = 0;
    for(int i = 0; i < n; i++) {
        char op[6];
        cin >> op;
        if(strcmp(op,"donate") == 0){
            int amount;
            cin >> amount;
            total += amount;
        }
        else if(strcmp(op,"report") == 0)
            cout << total << endl;

    }
}