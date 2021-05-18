#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int a,b,c;
        cin >> a >> b >> c;
        int total = a+b;
        int ans = 0;
        while(total/c != 0) {
            ans += total/c;
            total = total/c + total%c;
        }
        cout << ans << endl;
    }
    return 0;
}
