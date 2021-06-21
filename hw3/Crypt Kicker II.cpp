#include<bits/stdc++.h>
#include<map>
using namespace std;
int main() {
    string know = "the quick brown fox jumps over the lazy dog";
    string secret[105];
    string tmpsecret[105];
    int cases;
    cin >> cases;
    if(cases == 0)
        return 0;
    cin.ignore();
    cin.ignore();
    while(cases--) {
        int secretcount = 0;
        while(getline(cin,secret[secretcount]) && secret[secretcount].length()) {
            tmpsecret[secretcount] = secret[secretcount];
            secretcount++;
        }
        bool find = false;
        for(int i = 0; i < secretcount; i++) {
            if(secret[i].length() == know.length()) {
                map<char,char> cypher;
                bool notsecret = false;
                for(int j = 0; j < secret[i].length(); j++) {
                    if(secret[i][j] == ' ' && know[j] == ' ')
                        continue;
                    else {
                        if(secret[i][j] == ' ' || know[j] == ' ') {
                            notsecret = true;
                            break;
                        }
                        else {
                            if(cypher.find(secret[i][j]) == cypher.end())
                                cypher.insert(pair<char,char>(secret[i][j],know[j]));
                            else {
                                if(cypher.find(secret[i][j])->second != know[j]) {
                                    notsecret = true;
                                    break;
                                }
                            }
                        }
                    }
                }
                if(notsecret)
                    continue;
                bool flag = false;
                for(int j = 0; j < secretcount; j++) {
                    for(int k = 0; k < secret[j].length(); k++) {
                        if(secret[j][k] == ' ')
                            continue;
                        else {
                            if(cypher.find(secret[j][k]) == cypher.end()) {
                                flag = true;
                                break;
                            }
                            else {
                                tmpsecret[j][k] = cypher.find(secret[j][k])->second;
                            }
                        }
                    }
                    if(flag)
                        break;
                    if(j == secretcount-1)
                        find = true;
                }
            }
            if(find)
                break;
        }
        if(find) {
            for(int i = 0; i < secretcount; i++)
                cout << tmpsecret[i] << endl;
        }
        else        
            cout << "No solution." << endl;
        if(cases != 0)
            cout << endl;
    }
}