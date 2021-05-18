#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while(true) {
        cin >> n;
        if(n == 0)
            break;
        float money[n];
        float total = 0;
        int up = 0,down = 0;
        for(int i = 0; i < n; i++) {
            cin >> money[i];
            total+=money[i];
        }
        total *= 100;
        float avg = (int)(total)/n;
        avg /= 100;
        float ex1=0,ex2=0;
        for(int i = 0; i < n; i++) {
            if(money[i] > avg) {
                ex1 += money[i] - avg;
                up++;
            }
            else {
                ex2 += avg - money[i];
                down++;
            }
        }
        if(ex1 > ex2) {
            if(ex1-ex2 > 0.01*up) {
                printf("$%.2f\n",ex2 + ex1-ex2-0.01*up);
            }
            else
                printf("$%.2f\n",ex2);
        }
        else {
            if(ex2-ex1 > 0.01*down) {
                printf("$%.2f\n",ex1 + ex2-ex1-0.01*down);
            }
            else
                printf("$%.2f\n",ex1);
        }
    }
}