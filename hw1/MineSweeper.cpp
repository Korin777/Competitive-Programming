#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b;
    int count = 1;
    while(true) {
        cin >> a >> b;
        if(a == 0 && b == 0) {
            break;
        }
        if(count != 1) {
            cout << endl;
        }
        char mine[a][b];
        int mineout[a][b];
        for(int i = 0; i < a; i++) {
            for(int j = 0; j < b; j++) {
                cin >> mine[i][j];
                if(mine[i][j] == '*')
                    mineout[i][j] = -1;
                else 
                    mineout[i][j] = 0;
            }
        }
        cout << "Field #" << count << ":" << endl;
        for(int i = 0; i < a; i++) {
            for(int j = 0; j < b; j++) {
                if(mineout[i][j] == -1) {
                    if(i != 0) {
                        if(j != 0 && mineout[i-1][j-1] != -1)
                            mineout[i-1][j-1]++;
                        if(mineout[i-1][j] != -1)
                            mineout[i-1][j]++;
                        if(j != b-1 && mineout[i-1][j+1] != -1)
                            mineout[i-1][j+1]++;
                    }
                    if(j != 0 && mineout[i][j-1] != -1)
                        mineout[i][j-1]++;
                    if(j != b-1 && mineout[i][j+1] != -1)    
                        mineout[i][j+1]++;
                    if(i != a-1) {
                        if(j != 0 && mineout[i+1][j-1] != -1)
                            mineout[i+1][j-1]++;
                        if(mineout[i+1][j] != -1)
                            mineout[i+1][j]++;
                        if(j != b-1 && mineout[i+1][j+1] != -1) 
                            mineout[i+1][j+1]++;
                    }
                }
            }
        }
        for(int i = 0; i < a; i++) {
            for(int j = 0; j < b; j++) {
                if(mineout[i][j] == -1)
                    cout << '*';
                else
                    cout << mineout[i][j];
            }
            cout << endl;
        }
        count++;
    }
}
