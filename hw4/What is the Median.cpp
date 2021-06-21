#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    vector<int> num;
    while(cin >> n) {
        num.push_back(n);
        sort(num.begin(),num.end());
        if(num.size()%2 == 1)
            cout << num[num.size()/2] << endl;
        else
            cout << (num[num.size()/2]+num[num.size()/2-1])/2 << endl;
    }
}