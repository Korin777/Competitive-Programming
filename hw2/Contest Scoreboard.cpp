#include<bits/stdc++.h>
using namespace std;

struct contestant {
    int number;
    int solvedProblem = 0;
    int totalTime    = 0;
    bool participate = false;
    bool correctProblem[9];
    int penaltyProblem[9];
};

bool CompareContestant(contestant a, contestant b) {
    if(a.solvedProblem != b.solvedProblem)
        return (a.solvedProblem > b.solvedProblem);
    else if(a.totalTime != b.totalTime)
        return (a.totalTime < b.totalTime);
    else if(a.number != b.number)
        return (a.number < b.number);
    else 
        return a.participate > b.participate;
}


int main() {
    int cases;
    cin >> cases;
    cin.ignore();
    string fuck;
    getline(cin,fuck);
    for(int i = 0; i < cases; i++) {
        string line;
        stringstream ss;
        contestant contestants[100];
        for(int j = 0; j < 100; j++) {
            contestants[j].number = j+1;
            for(int k = 0; k < 9; k++) {
                contestants[j].correctProblem[k] = false;
                contestants[j].penaltyProblem[k] = 0;
            }
        }
        int contestantNumber, problemNumber, time;
        char L;
        while(getline(cin,line) && line.length()) {
            ss.clear();
            ss.str(line);
            ss >> contestantNumber >> problemNumber >> time >> L;
            int tmp = contestantNumber-1;
            if(!contestants[tmp].correctProblem[problemNumber-1] && L == 'C') {
                contestants[tmp].participate = true;
                contestants[tmp].solvedProblem++;
                contestants[tmp].totalTime += (time + contestants[tmp].penaltyProblem[problemNumber-1]);
                contestants[tmp].correctProblem[problemNumber-1] = true;
            }
            else if(!contestants[tmp].correctProblem[problemNumber-1] && L == 'I') {
                contestants[tmp].participate = true;
                contestants[tmp].penaltyProblem[problemNumber-1] += 20;
            }
            else {
                contestants[tmp].participate = true;
            }
        }
        sort(contestants,contestants+100,CompareContestant);
        for(int j = 0; j < 100; j++) {
            if(contestants[j].participate) {
                cout << contestants[j].number << " " << contestants[j].solvedProblem << " " << contestants[j].totalTime << endl;
            }
        }
        cout << endl;
    }
}