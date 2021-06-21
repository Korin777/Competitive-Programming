#include<bits/stdc++.h>
#include<map>
using namespace std;
int main() {
    int n;
    vector<int> seq;
    map<int,int> mymap;
    while(cin >> n) {
        if(mymap.find(n) == mymap.end()) {
            seq.push_back(n);
            mymap.insert(pair<int,int>(n,1));
        }
        else {
            mymap.find(n)->second++;
        }
    }
    for(int i = 0; i < seq.size(); i++) {
        cout << seq[i] << " " << mymap.find(seq[i])->second << endl;
    }
}