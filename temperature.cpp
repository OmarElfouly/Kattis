#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    if(y==1){
        if(x==0) cout << "ALL GOOD";
        else cout << "IMPOSSIBLE";
    }else{
        double intersect= (double)x/(1.0-y);
        cout << fixed<<setprecision(6);
        cout << intersect;
    }
        
}