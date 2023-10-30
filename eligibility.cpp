#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases;
    scanf("%d", &cases);
    while(cases--){
        string name;
        cin >> name;
        string study;
        cin >> study;
        string birth;
        cin >> birth;
        int courses;
        cin >> courses;
        bool elgible = false;
        if(stoi(study.substr(0,4)) >= 2010 ) cout << name << " eligible\n";
        else if(stoi(birth.substr(0,4)) >= 1991) cout << name << " eligible\n";
        else if(courses >= 41) cout << name << " ineligible\n";
        else cout << name << " coach petitions\n";

    }
    return 0;
}