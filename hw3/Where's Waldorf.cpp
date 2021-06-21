#include<bits/stdc++.h>
using namespace std;


int main() {
    int cases;
    cin >> cases;
    while(cases--) {
        cin.ignore();
        int m,n;
        cin >> m >> n;
        string matrix[m];
        for(int i = 0; i < m; i++) {
            cin >> matrix[i];
        }
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(matrix[i][j] >= 97)
                    matrix[i][j] -= 32;
            }
        }
        int num;
        cin >> num;
        string keyword[num];
        for(int i = 0; i < num; i++) {
            cin >> keyword[i];
            for(int j = 0; j < keyword[i].length(); j++) {
                if(keyword[i][j] >= 97)
                    keyword[i][j] -= 32;
            }
            bool find = false;
            for(int j = 0; j < m; j++) {
                for(int k = 0; k < n; k++) {

                    int matrixmpos = j, matrixnpos = k, pos = 0;
                    if(keyword[i].length() <= n-k) { // 右
                        while(keyword[i][pos] == matrix[matrixmpos][matrixnpos]) {
                            pos++;
                            matrixnpos++;
                            if(pos == keyword[i].length()) {
                                find = true;
                                cout << j+1 << " " << k+1 << endl;
                                break;
                            }
                        }
                    }
                    if(find)
                        break;
                    matrixmpos = j, matrixnpos = k, pos = 0;
                    if(keyword[i].length() <= k+1) { // 左
                        while(keyword[i][pos] == matrix[matrixmpos][matrixnpos]) {
                            pos++;
                            matrixnpos--;
                            if(pos == keyword[i].length()) {
                                find = true;
                                cout << j+1 << " " << k+1 << endl;
                                break;
                            }
                        }
                    }
                    if(find)
                        break;
                    matrixmpos = j, matrixnpos = k, pos = 0;
                    if(keyword[i].length() <= j+1) { // 上
                        while(keyword[i][pos] == matrix[matrixmpos][matrixnpos]) {
                            pos++;
                            matrixmpos--;
                            if(pos == keyword[i].length()) {
                                find = true;
                                cout << j+1 << " " << k+1 << endl;
                                break;
                            }
                        }
                    }
                    if(find)
                        break;
                    matrixmpos = j, matrixnpos = k, pos = 0;
                    if(keyword[i].length() <= m-j) { // 下
                        while(keyword[i][pos] == matrix[matrixmpos][matrixnpos]) {
                            pos++;
                            matrixmpos++;
                            if(pos == keyword[i].length()) {
                                find = true;
                                cout << j+1 << " " << k+1 << endl;
                                break;
                            }
                        }
                    }
                    if(find)
                        break;
                    matrixmpos = j, matrixnpos = k, pos = 0;
                    if(keyword[i].length() <= k+1 && keyword[i].length() <= j+1) { // 左上
                        while(keyword[i][pos] == matrix[matrixmpos][matrixnpos]) {
                            pos++;
                            matrixmpos--;
                            matrixnpos--;
                            if(pos == keyword[i].length()) {
                                find = true;
                                cout << j+1 << " " << k+1 << endl;
                                break;
                            }
                        }
                    }
                    if(find)
                        break;
                    matrixmpos = j, matrixnpos = k, pos = 0;
                    if(keyword[i].length() <= k+1 && keyword[i].length() <= m-j) { // 左下
                        while(keyword[i][pos] == matrix[matrixmpos][matrixnpos]) {
                            pos++;
                            matrixmpos++;
                            matrixnpos--;
                            if(pos == keyword[i].length()) {
                                find = true;
                                cout << j+1 << " " << k+1 << endl;
                                break;
                            }
                        }
                    }
                    if(find)
                        break;
                    matrixmpos = j, matrixnpos = k, pos = 0;
                    if(keyword[i].length() <= n-k && keyword[i].length() <= j+1) { // 右上
                        while(keyword[i][pos] == matrix[matrixmpos][matrixnpos]) {
                            pos++;
                            matrixmpos--;
                            matrixnpos++;
                            if(pos == keyword[i].length()) {
                                find = true;
                                cout << j+1 << " " << k+1 << endl;
                                break;
                            }
                        }
                    }
                    if(find)
                        break;
                    matrixmpos = j, matrixnpos = k, pos = 0;
                    if(keyword[i].length() <= n-k && keyword[i].length() <= m-j) { // 右下
                        while(keyword[i][pos] == matrix[matrixmpos][matrixnpos]) {
                            pos++;
                            matrixmpos++;
                            matrixnpos++;
                            if(pos == keyword[i].length()) {
                                find = true;
                                cout << j+1 << " " << k+1 << endl;
                                break;
                            }
                        }
                    }
                    if(find)
                        break;

                }
                if(find)
                    break;
            }
        }
        cout << endl;
    }
}