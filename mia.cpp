#include <bits/stdc++.h>
using namespace std;

int main(){
    int s0,s1,r0,r1;
    scanf("%d %d %d %d", &s0, &s1, &r0, &r1);
    while(s0+s1+r0+r1!=0){
        // both 21
        int s1s = min(s0,s1);
        int s10s = max(s0,s1);
        int r1s = min(r0,r1);
        int r10s = max(r0,r1);
        /*if((s10s == 2) && (s1s == 1) && (r10s == 2) && (r1s == 1)) printf("Tie.\n");
        else if((s10s == 2) && (s1s == 1)) printf("Player 1 wins.\n");
        else if((r10s == 2) && (r1s == 1)) printf("Player 2 wins.\n");
        else if(s10s == s1s && r10s == r1s){
            if(s10s > r10s) printf("Player 1 wins.\n");
            else if(s10s < r10s) printf("Player 2 wins.\n");
            else printf("Tie.\n");
        }else if(s10s == s1s)printf("Player 1 wins.\n");
        else if(r10s == r1s)printf("Player 2 wins.\n");
        else if(s10s > r10s) printf("Player 1 wins.\n");
        else if(s10s < r10s) printf("Player 2 wins.\n");
        else {
            if(s1s > r1s) printf("Player 1 wins.\n");
            else if(s1s < r1s) printf("Player 2 wins.\n");
            else printf("Tie.\n");
        }*/
        int s;
        if((s10s == 2) && (s1s == 1)) s= 1000;
        else if(s1s == s10s) s = 100 + s1s;
        else s = s10s*10 + s1s;
        int r;
        if((r10s == 2) && (r1s == 1)) r= 1000;
        else if(r1s == r10s) r = 100 + r1s;
        else r = r10s*10 + r1s;

        if(s > r) printf("Player 1 wins.\n");
        else if(s < r) printf("Player 2 wins.\n");
        else printf("Tie.\n");

        scanf("%d %d %d %d", &s0, &s1, &r0, &r1);
    }
}