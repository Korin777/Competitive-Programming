#include<bits/stdc++.h>
using namespace std;

int MaxLength(int a, int b);

int main() {
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF) {
        cout << a << " " << b << " " << MaxLength(a,b) << endl;
    }
    return 0;
}


int MaxLength(int a, int b) {
    int max = 0;
    if(a > b) {
        swap(a,b);
    }
    for(int i = a; i <= b; i++) {
        int tmpmax = 0,num = i;
        while(true) {
            if(num == 1) {
                tmpmax++;
                break;
            }
            if(num % 2 == 1)
                num = 3*num + 1;
            else
                num = num/2;    
            tmpmax++;
        }
        if(tmpmax > max) {
            max = tmpmax;
        }
    }
}