#include<bits/stdc++.h>
#include<list>
using namespace std;

int main() {
    int n;
    while(cin >> n) {
        int cmd,data;
        bool isqueue = true, isstack = true, ispriorityqueue = true;
        bool notake = true;
        list<int> mylist,mylist2,mylist3;
        for(int i = 0; i < n; i++) {
            cin >> cmd >> data;
            if(cmd == 1) {
                mylist.push_back(data);
                mylist2.push_back(data);
                mylist3.push_back(data);
            }
            else {
                notake = false;
                if(mylist.front() != data)
                    isqueue = false;
                else
                    mylist.pop_front();
                if(mylist3.back() != data)
                    isstack = false;
                else
                mylist3.pop_back();
                mylist2.sort();
                if(mylist2.back() != data)
                    ispriorityqueue = false;
                else
                    mylist2.pop_back();
            }
        }
        if(notake)
            cout << "not sure" << endl;
        else {
            if(!ispriorityqueue && !isqueue && !isstack)
                cout << "impossible" << endl;
            else if(!isstack && !ispriorityqueue && isqueue)
                cout << "queue" << endl;
            else if(!isstack && ispriorityqueue && !isqueue)
                cout << "priority queue" << endl;
            else if(isstack && !ispriorityqueue && !isqueue)
                cout << "stack" << endl;
            else 
                cout << "not sure" << endl;
        }
    }
}