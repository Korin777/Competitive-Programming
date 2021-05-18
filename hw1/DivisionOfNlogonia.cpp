#include<bits/stdc++.h>
using namespace std;
int main() {
    while(true) {
        int n;
        cin >> n;
        if(n == 0)
            break;
        int x,y;
        cin >> x >> y;
        for(int i = 0; i < n; i++) {
            int xx,yy;
            cin >> xx >> yy;
            if(xx == x || yy == y) {
                cout << "divisa" << endl;
                continue;
            }
            if(xx > x) {
                if(yy > y) {
                    cout << "NE" << endl;
                    continue;
                }
                else {
                    cout << "SE" << endl;
                    continue;
                }
            }
            else {
                if(yy > y) {
                    cout << "NO" << endl;
                    continue;
                }
                else {
                    cout << "SO" << endl;
                    continue;
                }
            }
        }
    }
    return 0;
}