#include<bits/stdc++.h>
using namespace std;
int main() {
    int cases;
    cin >> cases;
    while(cases--) {
        string line;
        cin >> line;
        int qnum;
        cin >> qnum;
        while(qnum--) {
            string sub;
            cin >> sub;
            int cur = 0,pre = 0;
            bool find = false;
            for(int i = 0; i < line.length(); i++) {
                if(line[i] == sub[cur]) {
                    if(cur == 0) {
                        pre = i;
                    }
                    cur++;
                    if(cur == sub.length()) {
                        find = true;
                        cout << 'y';
                        break;
                    }
                }
                else {
                    if(cur != 0) {
                        cur = 0;
                        i = pre;
                    }
                }
            }
            if(!find)
                cout << 'n';
            cout << endl;
        }
    }
}