#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i =0; i < n; i++) {
        int num;
        cin >> num;
        int seq[num];
        int tmpseq[num];
        for(int i =0; i < num ; i++) { 
            cin >> seq[i];
            tmpseq[i] = seq[i];
        }
        int count = 0;
        while(true) {
            bool zero = true;
            for(int i = 0 ; i < num; i++) {
                if(seq[i] != 0) {
                    zero = false;
                    break;
                }
            }
            if(zero) {
                cout << "ZERO" << endl;
                break;
            }
            if(count > 1000) {
                cout << "LOOP" << endl;
                break;
            }
            for(int i = 0 ; i < num; i++) {
                if(i == num-1) 
                    tmpseq[i] = abs(seq[i] - seq[0]);
                else
                    tmpseq[i] = abs(seq[i+1] - seq[i]);
            }
            for(int i = 0; i < num; i++) {
                seq[i] = tmpseq[i];
            }
            count++;
        }
    }
}