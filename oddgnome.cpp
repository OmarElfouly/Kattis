#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int g;
        scanf("%d", &g);
        int prev,curr;
        bool found = false;
        scanf("%d", &prev);
        for(int i=2; i<=g; i++){
            scanf("%d", &curr);
            if(!found){
                if(curr-prev!=1) {
                    printf("%d\n", i); found = true;
                }
                prev = curr;
            }
        }
    }
}