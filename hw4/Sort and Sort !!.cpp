#include<bits/stdc++.h>
using namespace std;
struct mystruct
{
    int num;
    int remain;
    bool oddoreven; //odd:true even:false
};

bool mycompare(mystruct a, mystruct b) {
    if(a.remain != b.remain)
        return (a.remain < b.remain);
    else if(a.oddoreven != b.oddoreven)
        return a.oddoreven;
    else if(a.oddoreven)
        return (a.num > b.num);
    else
        return (a.num < b.num);
}


int main() {
    int n,m;
    while(true) {
        cin >> n >> m;
        cout << n << " " << m << endl;
        if(n == 0 && m == 0)
            break;
        mystruct allnum[n];
        for(int i = 0 ; i < n; i++) {
            cin >> allnum[i].num;
            allnum[i].remain = allnum[i].num % m;
            if(allnum[i].num % 2 == 1 || allnum[i].num % 2 == -1)
                allnum[i].oddoreven = true; //奇數
            else
                allnum[i].oddoreven = false;//偶數
        }
        sort(allnum,allnum+n,mycompare);
        for(int i = 0; i < n; i++) {
            cout << allnum[i].num << endl;
        }
    }
}