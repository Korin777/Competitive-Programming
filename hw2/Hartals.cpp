#include<bits/stdc++.h>
using namespace std;

int main() {
    int casenum;
    cin >> casenum;
    for(int i = 0; i < casenum; i++) {
        int day, party,lose = 0;
        cin >> day >> party;
        bool days[day];
        for(int j = 0; j < day; j++)
            days[j] = false;
        int partys[party];
        for(int j = 0; j < party; j++)
            cin >> partys[j];
        for(int j = 0; j < party; j++) {
            int tmpday = 0;            
            tmpday += partys[j];    
            while(tmpday <= day) {
                if((tmpday%7 != 0 && tmpday%7 != 6) && days[tmpday-1] == false)
                {
                    days[tmpday-1] = true;
                    lose++;
                }
                tmpday += partys[j];
            }
        }
        cout << lose << endl;
    }
}