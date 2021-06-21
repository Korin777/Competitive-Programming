#include<bits/stdc++.h>
using namespace std;

struct mystruct
{
    int shour;
    int sminute;
    int ehour;
    int eminute;
};

bool mycompare(mystruct a, mystruct b) {
    if(a.shour != b.shour)
        return (a.shour < b.shour);
    else
        return (a.sminute < b.sminute);
}


int main() {
    int n;
    string line;
    int count = 0;
    while(getline(cin,line)) {
        count++;
        n = atoi(line.c_str());
        mystruct schedule[n];
        for(int i = 0; i < n; i++) {
            getline(cin,line);
            schedule[i].shour = (line[0]-'0')*10 + (line[1]-'0');
            schedule[i].sminute = (line[3]-'0')*10 + (line[4]-'0');
            schedule[i].ehour = (line[6]-'0')*10 + (line[7]-'0');
            schedule[i].eminute = (line[9]-'0')*10 + (line[10]-'0');
        }
        sort(schedule,schedule+n,mycompare);
        int hour = 0,minute = 0,shour = 0,sminute = 0;
        for(int i = -1; i < n; i++) {
            int tmphour = 0,tmpminute = 0;
            if(i == -1) {
                tmphour = schedule[i].shour - 10;
                tmpminute = schedule[i].sminute;
            }
            else if(i == n-1) {
                tmpminute = 60 - schedule[i].eminute;
                if(tmpminute == 60) {
                    tmphour = 18 - schedule[i].ehour;
                    tmpminute = 0;
                }
                else
                    tmphour = 18 - schedule[i].ehour - 1;
            }
            else {
                if(schedule[i+1].sminute >= schedule[i].eminute) {
                    tmphour = schedule[i+1].shour - schedule[i].ehour;
                    tmpminute = schedule[i+1].sminute - schedule[i].eminute;
                }
                else {
                    tmphour = schedule[i+1].shour - schedule[i].ehour - 1;
                    tmpminute = 60 - abs(schedule[i+1].sminute - schedule[i].eminute);
                }
            }
            if(tmphour >= hour) {
                if(tmphour == hour) {
                    if(tmpminute > minute) {
                        minute = tmpminute;
                        if(i == -1) {
                            shour = 10;
                            sminute = 0;
                        }
                        else {
                            shour = schedule[i].ehour;
                            sminute = schedule[i].eminute;
                        }
                    }
                }
                else {
                    minute = tmpminute;
                    if(i == -1) {
                        shour = 10;
                        sminute = 0;
                    }
                    else {
                        shour = schedule[i].ehour;
                        sminute = schedule[i].eminute;
                    }
                }
                hour = tmphour;
            }
        }
        if(hour == 0) {
            if(sminute == 0)
                cout << "Day #" << count << ": the longest nap starts at " << shour << ":" << sminute << 0 << " and will last for " << minute << " minutes." << endl;
            else
                cout << "Day #" << count << ": the longest nap starts at " << shour << ":" << sminute << " and will last for " << minute << " minutes." << endl;
        }
        else {
            if(sminute == 0)
                cout << "Day #" << count << ": the longest nap starts at " << shour << ":" << sminute << 0 << " and will last for " << hour << " hours and " << minute << " minutes." << endl;
            else
                cout << "Day #" << count << ": the longest nap starts at " << shour << ":" << sminute << " and will last for " << hour << " hours and " << minute << " minutes." << endl;

        }
    }
}