#include<bits/stdc++.h>
#include<map>
using namespace std;

bool sortfrag(string a, string b) {
    return a.length() > b.length();
}

int main() {
    int cases;
    cin >> cases;
    if(cases == 0)
        return 0;
    cin.ignore();
    cin.ignore();
    while(cases--) {
        vector<string> frag;
        map<string,int> mymap;
        map<string,int>::iterator iter;
        string line;
        while(getline(cin,line) && line.length()) {
            frag.push_back(line);
        }
        sort(frag.begin(),frag.end(),sortfrag);
        int num = frag[0].length() + frag[frag.size()-1].length();
        int tmp = frag.size()-1;
        bool end = false;
        for(int i = 0; i < frag.size(); i++) {
            map<string,int> localmap;
            if(i >= tmp)
                break;  
            for(int j = tmp; j > i; j--) {
                if(frag[i].length()+frag[j].length() != num) {
                    if(frag[i].length() != frag[i+1].length()) {
                        tmp = j;
                    }
                    break;
                }
                string a = frag[i] + frag[j];
                if(localmap.find(a) == localmap.end()) {
                    if(mymap.find(a) == mymap.end()) {
                        localmap.insert(pair<string,int>(a,1));
                        mymap.insert(pair<string,int>(a,1));
                    }
                    else {
                        localmap.insert(pair<string,int>(a,1));
                        mymap.find(a)->second += 1;
                    }
                }
                string b = frag[j] + frag[i];
                if(a.compare(b) != 0) {
                    if(localmap.find(b) == localmap.end()) {
                        if(mymap.find(b) == mymap.end()) {
                            localmap.insert(pair<string,int>(b,1));
                            mymap.insert(pair<string,int>(b,1));
                        }
                        else {
                            localmap.insert(pair<string,int>(b,1));
                            mymap.find(b)->second += 1;
                        }
                    }
                }
            }
        }
        for(iter = mymap.begin(); iter != mymap.end(); iter++) {
            if(iter->second == frag.size()/2) {
                cout << iter->first << endl;
                break;
            }
        }
        cout << endl;
    }
}