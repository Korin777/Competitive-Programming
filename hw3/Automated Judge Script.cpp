#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    int n,m,x = 1;
    while(true) {
        vector<int> solnum,ansnum;
        string sol[105], ans[105];
        cin >> n;
        if(n == 0)
            break;
        cin.ignore();
        for(int i = 0; i < n; i++) {
            getline(cin,sol[i]);
            for(int j = 0; j < sol[i].length(); j++) {
                if(48 <= sol[i][j] && sol[i][j] <= 57) {
                    solnum.push_back(sol[i][j] - '0');
                }
            }
        }
        cin >> m;
        cin.ignore();
        for(int i = 0; i < m; i++) {
            getline(cin,ans[i]);
            for(int j = 0; j < ans[i].length(); j++) {
                if(48 <= ans[i][j] && ans[i][j] <= 57) {
                    ansnum.push_back(ans[i][j] - '0');
                }
            }
        }
        bool judge = false;
        if(ansnum.size() == solnum.size()) {
            for(int i = 0; i < ansnum.size(); i++) {
                if(ansnum[i] != solnum[i]) {
                    cout << "Run #" << x << ": Wrong Answer" << endl;
                    judge = true;
                    break;
                }
            }
        }
        else {
            cout << "Run #" << x << ": Wrong Answer" << endl;
            judge = true;
        }
        if(!judge && m == n) {
            for(int i = 0; i < m; i++) {
                if(sol[i].length() == ans[i].length()) {
                    if(sol[i].compare(ans[i]) != 0) {
                        cout << "Run #" << x << ": Presentation Error" << endl;
                        break;
                    }
                    else if(i == m-1) {
                        cout << "Run #" << x << ": Accepted" << endl;
                    }
                }
                else {
                    cout << "Run #" << x << ": Presentation Error" << endl;
                    break;
                }
            }
        }
        else if(!judge)
            cout << "Run #" << x << ": Presentation Error" << endl;
        x++;
    }
}