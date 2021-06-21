#include<bits/stdc++.h>
using namespace std;
int main() {
    string line;
    while(getline(cin,line) && line.length()) {
        vector<int> pancakes;
        vector<int> copy;
        string tmp;
        stringstream token(line);
        while(getline(token, tmp, ' '))
        {
            pancakes.push_back(atoi(tmp.c_str()));
            copy.push_back(pancakes[pancakes.size()-1]);
        }
        for(int i = 0; i < copy.size(); i++) {
            if(i == 0)
                cout << pancakes[i];
            else
                cout << " " << pancakes[i];
        }
        cout << endl;
        sort(copy.begin(),copy.end());
        for(int i = copy.size()-1; i >= 0; ) {
            if(pancakes[i] == copy[i]) {
                i--;
                continue;
            }
            else {
                for(int j = 0; j < copy.size(); j++) {
                    if(pancakes[j] == copy[i]) {
                        if(j == 0) {
                            cout << copy.size() - i << " ";
                            for(int k = 0; k < (i+1)/2; k++) {
                                int tmp = pancakes[k];
                                pancakes[k] = pancakes[i-k];
                                pancakes[i-k] = tmp;
                            }
                            i--;
                        }
                        else {
                            cout << copy.size() - j << " ";
                            for(int k = 0; k < (j+1)/2; k++) {
                                int tmp = pancakes[k];
                                pancakes[k] = pancakes[j-k];
                                pancakes[j-k] = tmp;
                            }
                        }
                        break;
                    }
                }
            }
        }
        cout << 0;
        cout << endl;
    }
}