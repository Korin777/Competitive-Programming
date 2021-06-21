#include<bits/stdc++.h>
using namespace std;
int main() {
    int cases;
    cin >> cases;
    cin.ignore();
    while(cases--) {
        cin.ignore();
        string line;
        getline(cin,line);
        bool find = false;
        for(int i = 0; i < line.length()/2; i++) {
            if(line.length() % (i+1) != 0)
                continue;
            string sub = line.substr(0,i+1);
            for(int j = 0; j < line.length()/(i+1); j++) {
                if(sub.compare(line.substr(0+(j*(i+1)),i+1))!=0)
                    break;
                if(j == line.length()/(i+1)-1) {
                    find = true;
                    cout << i+1 << endl;
                }    
            }
            if(find)
                break;
        }
        if(!find)
            cout << line.length() << endl;
        cout << endl;
    }
}