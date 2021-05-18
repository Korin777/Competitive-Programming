#include<bits/stdc++.h>
#include<map>
#include<vector>
using namespace std;
int main() {
    int cases;
    cin >> cases;
    for(int c = 0; c < cases; c++) {
        int np, nn;
        string paper;
        cin >> np >> nn;
        getline(cin,paper);
        map<string, int> authorid;
        vector<vector<int>> am;
        int id = 0;
        while(np--) {
            getline(cin,paper);
            char *cstr = new char[paper.length() + 1];
            strcpy(cstr, paper.c_str());
            char *authors = strtok(cstr,":");
            char *firstname = strtok(authors,", "),*lastname;
            vector<string> author;
            while(firstname) {
                lastname =  strtok(NULL,",");
                char *fullname = (char*)malloc(sizeof(char)*strlen(firstname));
                strcpy(fullname, firstname);
                strcat(fullname,",");
                strcat(fullname, lastname);    
                string name(fullname);
                if(authorid.find(fullname) == authorid.end()) {
                    vector<int> am2;
                    am.push_back(am2);
                    authorid.insert(pair<string, int>(name,id));   
                    id++;
                    for(int i = 0; i < id; i++) {
                        while(am[i].size() != id)
                            am[i].push_back(0);
                    }
                }
                author.push_back(fullname);
                firstname = strtok(NULL,", ");  
                // free(fullname);
            }
            for(int i = 0; i < author.size(); i++) {
                for(int j = 0; j < author.size(); j++) {
                    if(author[i].compare(author[j]) == 0)
                        continue;
                    else {
                        am[authorid.find(author[i])->second][authorid.find(author[j])->second] = 1;
                    }
                }
            }
        }

        int erdos[id];
        int currenterdo = 0;
        map<int,int> set;
        map<int, int>::iterator iter;
        for(int i = 0; i < id; i++) {
            erdos[i] = -1;
            set.insert(pair<int,int>(i,i));
        }
        int tmp = authorid.find("Erdos, P.")->second;
        erdos[tmp] = currenterdo;
        currenterdo++;
        set.erase(tmp);
        vector<int> erdorelation;
        vector<int> tmperdorelation;
        for(int i = 0; i < id; i++) {
            if(am[tmp][i] == 1) {
                erdos[i] = currenterdo;
                erdorelation.push_back(i);
                set.erase(i);
            }
        }
        currenterdo++;  
        while(erdorelation.size() != 0) {
            for(int i = 0; i < erdorelation.size(); i++) {
                for(iter = set.begin(); iter != set.end(); iter++) {
                    if(am[erdorelation[i]][iter->second] == 1) {
                        erdos[iter->second] = currenterdo;
                        tmperdorelation.push_back(iter->second);
                    }
                }
            }
            erdorelation.clear();
            for(int i = 0; i < tmperdorelation.size(); i++) {
                erdorelation.push_back(tmperdorelation[i]);
                set.erase(tmperdorelation[i]);
            }
            tmperdorelation.clear();    
            currenterdo++;
        }
        map<string, int>::iterator iter1;
        cout << "Scenario " << (c+1) << endl; 
        while(nn--) {
            string authorurdo;
            getline(cin,authorurdo);
            if(authorid.find(authorurdo) != authorid.end()) {
                int tmp = authorid.find(authorurdo)->second;
                if(erdos[tmp] != -1)
                    cout << authorurdo << " " << erdos[tmp] << endl;
                else
                    cout << authorurdo << " " << "infinity" << endl;
            }
            else
                cout << authorurdo << " " << "infinity" << endl;
        }
    }
    return 0;
}