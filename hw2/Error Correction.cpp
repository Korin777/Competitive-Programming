#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while(1) {
        cin >> n;
        if(n == 0)
            break;
        int rownotparity = 0,columnnotparity = 0;
        int matrix[n][n], column[n];
        int rowpos,columnpos;
        for(int i = 0; i < n; i++)
            column[i] = 0;
        for(int i = 0; i < n; i++) {
            int rowcount = 0;
            for(int j = 0; j < n; j++) {
                cin >> matrix[i][j];
                rowcount += matrix[i][j];
                column[j] += matrix[i][j];
                if(i == n-1) {
                    if(column[j]%2 == 1) {
                        columnpos = j;
                        columnnotparity++;
                    }
                }
            }
            if(rowcount%2 == 1) {
                rowpos = i;
                rownotparity++;
            }
        }
        if(rownotparity==0 && columnnotparity==0)
            cout << "OK" << endl;
        else if(rownotparity==1 && columnnotparity ==1) {
            cout << "Change bit ("<< rowpos+1 << "," << columnpos+1 << ")" << endl;
        }
        else
            cout << "Corrupt" << endl;
    }
}