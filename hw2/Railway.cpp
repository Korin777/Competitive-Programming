#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while(1) {
        cin >> n;
        if(n == 0)
            break;            
        while(1) {
            bool valid = true;
            vector<int> v;
            int num;
            int upper;
            cin >> num;
            upper = num;
            if(num == 0)
                break;
            for(int i = 1; i <= num; i++)
                v.push_back(i);
            v.pop_back();
            for(int i = 1; i < n; i++) {
                cin >> num;
                if(upper < num) {
                    for(int i = upper+1; i <= num; i++)
                        v.push_back(i);
                    v.pop_back();  
                    upper = num; 
                }
                else {
                    if(v.back() != num)
                        valid = false;
                    v.pop_back();
                }
            }
            if(valid)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
        cout << endl;
    }
}