#include<bits/stdc++.h>
using namespace std;
struct mystruct {
    int pos;
    int value = 0;
};
bool mycompare(mystruct a, mystruct b) {
    return (a.value < b.value);
}

int main() {
    int cases,m,n;
    string line;
    cin >> cases;
    if(cases == 0)
        return 0;
    cin.ignore();
    while(cases--) {
        cin.ignore();
        cin >> m >> n;
        cin.ignore();
        string dataset[n];
        mystruct sortdataset[n];
        for(int i = 0; i < n; i++) {
            sortdataset[i].pos = i;
            sortdataset[i].value = 0;
        }
        for(int i = 0; i < n; i++) {
            getline(cin,dataset[i]);
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                for(int k = j+1; k < m; k++) {
                    if(dataset[i][j] > dataset[i][k])
                        sortdataset[i].value++;
                }
            }
        }
        stable_sort(sortdataset,sortdataset+n,mycompare);
        for(int i = 0; i < n; i++) {
            cout << dataset[sortdataset[i].pos] << endl;
        }
        cout << endl;
    }
}