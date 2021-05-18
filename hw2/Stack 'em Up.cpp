#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

int main() {

    int casenum;
    cin >> casenum;
    string line;
    string poker[52];
    for(int i = 0; i < 52; i++) {
        string s;
        if(i < 13)
            s = " of Clubs";
        else if(i < 26)
            s = " of Diamonds";
        else if(i < 39)
            s = " of Hearts";
        else
            s = " of Spades";
        if(i%13==12)
            poker[i] = "Ace" + s;
        else if(i%13==9)
            poker[i] = "Jack" + s;
        else if(i%13==10)
            poker[i] = "Queen" + s;
        else if(i%13==11)
            poker[i] = "King" + s;
        else    
            poker[i] = to_string((i+2)%13) + s;
    }
    for(int j = 0; j < casenum; j++) {
        int shuffles;
        cin >> shuffles;
        int shuffle[shuffles][52];
        int pokerindex[52];
        for(int i = 0; i < 52; i++)
            pokerindex[i] = i;
        for(int i = 0; i < shuffles; i++) {
            for(int k = 0; k < 52; k++) {
                            cin.ignore();
                cin >> shuffle[i][k];
            }
        }
        getline(cin,line);
        while(getline(cin,line) && line.length()) { 
            int method = stoi(line)-1;
            int tmppoker[52];
            for(int i = 0; i < 52; i++)
              tmppoker[i] = pokerindex[i];
            for(int i = 0; i < 52; i++) {
              pokerindex[i] = tmppoker[shuffle[method][i]-1];
            }
        }
        for(int i = 0; i < 52; i++)
            printf("%s\n",poker[pokerindex[i]].c_str());
        cout << endl;
    }

}
