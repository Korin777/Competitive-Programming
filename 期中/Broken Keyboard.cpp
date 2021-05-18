#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    // string s;
    char s[101000];
    memset(s,101000,'\0');
    while(scanf("%s",s)!=EOF) {
        
        vector<char> sentence;
        vector<char>::iterator it;
        bool insertback = true;
        int count = 0;
        for(int i = 0; i < 101000; i++) {
            if(s[i] == '\0')
                break;
            if(char(s[i]) == '[') {
                if(sentence.size()!=0) {
                insertback = false;
                count = 0;
                }
            }
            else if(char(s[i]) == ']')
                insertback = true;
            else {
                if(insertback) {
                    sentence.push_back(char(s[i]));
                }
                else {
                    it= sentence.begin();
                    it += count;
                    count++;
                    sentence.insert(it,char(s[i]));
                }
            }   
        }
        for(int i = 0; i < sentence.size(); i++) {
            cout << sentence[i];
        }
        cout << endl;
    }
}