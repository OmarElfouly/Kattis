#include <bits/stdc++.h>
using namespace std;

int main(){
    int sweet, sour;
    cin >> sweet >> sour;
    while(sweet || sour){
        if((sweet+sour)==13) cout << "Never speak again." << endl;
        else if(sweet==sour) cout << "Undecided." << endl;
        else if(sweet>sour) cout << "To the convention." << endl;
        else cout << "Left beehind." << endl;
        cin >> sweet >> sour;
    }
    return 0;
}