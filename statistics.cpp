#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, minint, maxint, t,c=1;
    while(cin >> n){
        cin >> minint;
        maxint = minint;
        for(int i = 1; i<n ; i++){
            cin >> t;
            minint = min(minint,t);
            maxint = max(maxint,t);
        }
        printf("Case %d: %d %d %d\n",c++,minint,maxint,maxint-minint);
    }
    return 0;
}