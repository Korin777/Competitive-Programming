#include<bits/stdc++.h>
#include<map>
using namespace std;

void myfind(int index,vector<vector<int>> am,vector<int> tmpv,int &end) {
    
    for(int i = 0; i < am[index].size(); i++) {
        tmpv.push_back[]
        myfind(am[index][i],am);
    }
}


int main() {
    string input[25200];
    int inputnum = 0;
    map<string, int> mymap;
    while(getline(cin,input[inputnum]) && input[inputnum].length()) {
        mymap.insert(pair<string,int>(input[inputnum],inputnum));
        inputnum++;
    }
    vector<vector<int>> am;
    for(int i = 0; i < inputnum; i++) {
        vector<int> am2;
        am.push_back(am2);
        for(int j = 0; j < inputnum; j++) {
            if(i == j) {
                continue;
            }
            else if(input[i].length() != input[j].length()) {
                continue;
            }
            else {
                int count = 0;
                for(int k = 0; k < input[i].length(); k++) {
                    if(input[i][k] != input[j][k])
                        count++;
                    if(count > 1)
                        break;
                }
                if(count == 1)
                    am[i].push_back(j);
            }
        }
    }
    string start,end;
    while(cin >> start >> end) {
        int sindex,eindex;
        if(mymap.find(start) != mymap.end() && mymap.find(end) != mymap.end()) {
            sindex = mymap.find(start)->second;
            eindex = mymap.find(end)->second;
        }
        else {
            cout << "No solution." << endl << endl;
            continue;
        }
        vector<int> minseq;
        for(int i = 0; i < am[sindex].size(); i++) {
            bool flag = false;
            myfind(am[sindex][i],am);
        }
        cout << endl;
    }
}