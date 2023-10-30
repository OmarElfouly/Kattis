#include <bits/stdc++.h>
using namespace std;

int main(){
    int g, s, c;
    scanf("%d %d %d", &g, &s, &c);
    int total = g*3+s*2+c;
    if(total>7) cout<< "Province or Gold";
    else if(total>5) cout << "Duchy or Gold";
    else if(total>4) cout << "Duchy or Silver";
    else if(total>2) cout << "Estate or Silver";
    else if(total>1) cout << "Estate or Copper";
    else cout << "Copper";
    return 0;

}