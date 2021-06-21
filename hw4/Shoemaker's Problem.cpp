#include<bits/stdc++.h>
using namespace std;
struct mystruct
{
    int id;
    float days;
    float cost;
    float value;
};

bool mycompare(mystruct a, mystruct b) {
    if(a.value != b.value)
        return (a.value > b.value);
    else
        return (a.id < b.id);
}

int main() {
    int cases;
    cin >> cases;
    while(cases--) {
        cin.ignore();
        cin.ignore();
        int count;
        cin >> count;
        mystruct works[count];
        for(int i = 0; i < count; i++) {
            cin >> works[i].days >> works[i].cost;
            works[i].id = i+1;
            works[i].value = works[i].cost/works[i].days;
        }
        sort(works,works+count,mycompare);
        for(int i = 0; i < count; i++) {
            if(i == 0) {
                cout << works[i].id;
            }
            else
                cout << " " << works[i].id;
        }
        cout << endl << endl;
    }
}