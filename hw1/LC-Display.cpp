#include<bits/stdc++.h>
using namespace std;

void sevendigitdisplay(int n,char nums,int row);

int main() {
    int n;
    string num;
    while(true) {
        cin >> n >> num;
        if(n == 0 && num.compare("0") == 0)
            break;
        for(int i = 0; i < 2*n+3; i++) {
            for(int j = 0; j < num.size(); j++) {
                sevendigitdisplay(n,num[j],i+1);
                if(j != num.size()-1)
                    cout << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}

void sevendigitdisplay(int n,char nums,int row) {
    int num = nums - '0';
    if(num == 0) {
        if(row == 1 || row == 3+2*n) {
            cout << " ";
            for(int i = 0; i < n; i++)
                cout << "-";
            cout << " ";
        }
        else if(row <= 1+n || (row > 1+n+1 && row <= 1+2*n+1)) {
            cout << "|";
            for(int i = 0; i < n; i++)
                cout << " ";
            cout << "|";
        }
        else if(row == 2+n) {
            for(int i = 0; i < n+2; i++)
                cout << " ";
        }
    }
    if(num == 1) {
        if(row == 1 || row == 2+n || row == 3+2*n) {
            for(int i = 0; i < n+2; i++)
                cout << " ";
        }
        else {
            for(int i = 0; i < n+1;i++)
                cout << " ";
            cout << "|";
        }
    }
    if(num == 2) {
        if(row == 1 || row == 2+n || row == 3+2*n) {
            cout << " ";
            for(int i = 0; i < n; i++)
                cout << "-";
            cout << " ";
        }
        else if(row <= 1+n) {
            for(int i = 0; i < n+1; i++) {
                cout << " ";
            }
            cout << "|";
        }
        else {
            cout << "|";
            for(int i = 0; i < n+1; i++) {
                cout << " ";
            }
        }
    }
    if(num == 3) {
        if(row == 1 || row == 2+n || row == 3+2*n) {
            cout << " ";
            for(int i = 0; i < n; i++)
                cout << "-";
            cout << " ";
        }
        else{
            for(int i = 0; i < n+1; i++) {
                cout << " ";
            }
            cout << "|";
        }
    }
    if(num == 4) {
        if(row == 1 || row == 3+2*n) {
            for(int i = 0; i < n+2; i++)
                cout << " ";
        }
        else if(row == 2+n) {
            cout << " ";
            for(int i = 0; i < n; i++)
                cout << "-";
            cout << " ";            
        }
        else if(row <= 1+n) {
            cout << "|";
            for(int i = 0; i < n; i++) {
                cout << " ";
            }
            cout << "|";
        }
        else {
            for(int i = 0; i < n+1; i++) {
                cout << " ";
            }
            cout << "|";            
        }
    }
    if(num == 5) {
        if(row == 1 || row == 2+n || row == 3+2*n) {
            cout << " ";
            for(int i = 0; i < n; i++)
                cout << "-";
            cout << " ";
        }
        else if(row <= 1+n) {
            cout << "|";
            for(int i = 0; i < n+1; i++) {
                cout << " ";
            }
        }
        else {
            for(int i = 0; i < n+1; i++) {
                cout << " ";
            }
            cout << "|";
        }               
    }
    if(num == 6) {
        if(row == 1 || row == 2+n || row == 3+2*n) {
            cout << " ";
            for(int i = 0; i < n; i++)
                cout << "-";
            cout << " ";
        }
        else if(row <= 1+n) {
            cout << "|";
            for(int i = 0; i < n+1; i++) {
                cout << " ";
            }
        }
        else {
            cout << "|";
            for(int i = 0; i < n; i++) {
                cout << " ";
            }
            cout << "|";
        }
    }
    if(num == 7) {
        if(row == 1) {
            cout << " ";
            for(int i = 0; i < n; i++)
                cout << "-";
            cout << " ";
        }
        else if(row == 2+n || row == 3+2*n) {
            for(int i = 0; i < n+2; i++)
                cout << " ";
        }
        else{
            for(int i = 0; i < n+1; i++) {
                cout << " ";
            }
            cout << "|";
        }
    }
    if(num == 8) {
        if(row == 1 || row == 2+n || row == 3+2*n) {
            cout << " ";
            for(int i = 0; i < n; i++)
                cout << "-";
            cout << " ";
        }
        else {
            cout << "|";
            for(int i = 0; i < n; i++) {
                cout << " ";
            }
            cout << "|";
        }
    }
    if(num == 9) {
        if(row == 1 || row == 2+n || row == 3+2*n) {
            cout << " ";
            for(int i = 0; i < n; i++)
                cout << "-";
            cout << " ";
        }
        else if(row <= 1+n) {
            cout << "|";
            for(int i = 0; i < n; i++) {
                cout << " ";
            }
            cout << "|";
        }    
        else {
            for(int i = 0; i < n+1; i++) {
                cout << " ";
            }
            cout << "|";            
        }   
    }
    return;
}