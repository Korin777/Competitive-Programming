#include<bits/stdc++.h>
using namespace std;
int main() {
    int cases;
    cin >> cases;
    while(cases--) {
        int count,ans = 0,middle;
        cin >> count;
        int num[count];
        for(int i = 0 ; i < count; i++) {
            cin >> num[i];
        }
        sort(num,num+count);
        if(count%2 == 1)
            middle = num[count/2];
        else
            middle = (num[count/2-1]+num[count/2])/2;
        for(int i = 0; i < count; i++) {
            ans += abs(middle-num[i]);
        }
        cout << ans << endl;
    }
}