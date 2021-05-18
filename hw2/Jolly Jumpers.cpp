#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while(cin >> n) {
        int num[n];
        bool hasnum[n-1];
        for(int i = 0; i < n; i++) {
            cin >> num[i];
            if(n != n-1)
                hasnum[i] = false;
        }
        if(n == 1) {
            cout << "Jolly" << endl;
        }
        for(int i = 1; i < n; i++) {
            int tmp = abs(num[i]-num[i-1]);
            if(tmp < n && tmp > 0) {
                if(hasnum[tmp-1] == true) {
                    cout << "Not jolly" << endl;
                    break;
                }
                hasnum[tmp-1] = true;
            }
            else {
                cout << "Not jolly" << endl;
                break; 
            }
            if(i == n-1)
                cout << "Jolly" << endl;
        }

    }
}