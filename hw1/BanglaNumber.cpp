#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int n;
    int count = 1;
    while(scanf("%lld",&n) != EOF) {
        long long int up,down;
        bool bigthanup = false;
        down = n%1000000000;
        up = n/1000000000*100;
        if(up!=0)
            bigthanup = true;
        printf("%4d.",count);
        if(up!=0) {
            int kuti=0,lakh=0,hajar=0,shata=0;
            kuti = up / 10000000;
            up -= kuti*10000000;
            lakh = up / 100000;
            up -= lakh*100000;
            hajar = up/1000;
            up -= hajar * 1000; 
            shata = up/100;
            up -= shata*100;
            if(kuti!=0)
                printf(" %d kuti",kuti);
            if(lakh != 0) 
                printf(" %d lakh",lakh);
            if(hajar!=0)    
                printf(" %d hajar",hajar);
            if(shata!=0)
                printf(" %d shata",shata);
        }
        if(down!=0 || bigthanup) {
            int kuti=0,lakh=0,hajar=0,shata=0;
            kuti = down / 10000000;
            down -= kuti*10000000;
            lakh = down / 100000;
            down -= lakh*100000;
            hajar = down/1000;
            down -= hajar * 1000;
            shata = down/100;
            down -= shata*100;
            if(kuti!=0 || bigthanup) {
                if(kuti == 0)
                    printf(" kuti");
                else
                    printf(" %d kuti",kuti);
            }
            if(lakh != 0) 
                printf(" %d lakh",lakh);
            if(hajar!=0)    
                printf(" %d hajar",hajar);
            if(shata!=0)
                printf(" %d shata",shata);
            if(down !=0)
                printf(" %lld",down);
        }
        if(n ==  0)
            printf(" 0");
        count++;
        cout << endl;
    }
    return 0;
}
