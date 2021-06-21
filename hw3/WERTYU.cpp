#include<bits/stdc++.h>
using namespace std;
int main() {
    char error[43] = {'1','2','3','4','5','6','7','8','9','0','-','=','W','E','R','T','Y','U','I','O','P','[',']','\\','S','D','F','G','H','J','K','L',';','\'','X','C','V','B','N','M',',','.','/'};
    char correct[43] = {'`','1','2','3','4','5','6','7','8','9','0','-','Q','W','E','R','T','Y','U','I','O','P','[',']','A','S','D','F','G','H','J','K','L',';','Z','X','C','V','B','N','M',',','.'};
    string line;
    while(getline(cin,line) && line.length()) {
        for(int i = 0; i < line.length(); i++) {
            bool tranform = false;
            for(int j = 0; j < 43; j++) {
                if(line[i] == error[j]) {
                    cout << correct[j];
                    tranform = true;
                    break;
                }
            }
            if(!tranform)
                cout << line[i];
        }
        cout << endl;
    }    


    return 0;
}