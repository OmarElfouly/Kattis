#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        string s;
        cin >> s;
        if(s=="P=NP") cout << "skipped\n";
        else{
            int a = stoi(s.substr(0, s.find('+')));
            int b = stoi(s.substr(s.find('+')+1));
            cout << a+b << endl;
        }
    }
    return 0;
}