#include <bits/stdc++.h>
using namespace std;

// void rev(string &s){
//     string::iterator first  = s.begin();
//     string::iterator last = s.end();
//     while(first != last && first != --last){
//         iter_swap(first, last);
//         ++first;
//     }

// }

int main(){
    // solve two ways: either using string manip or using int manip
    //int manip
    int a,b;
    scanf("%d %d", &a, &b);
    int a_rev = 0, b_rev = 0;
    while(a){
        a_rev += a%10;
        a_rev *= 10;
        a /= 10;
    }
    while(b){
        b_rev += b%10;
        b_rev *= 10;
        b /= 10;
    }
    printf("%d\n", max(a_rev/10, b_rev/10));

    // string manip
    // string a,b;
    // cin >> a >> b;
    // rev(a);//reverse(a.begin(), a.end());
    // rev(b);//reverse(b.begin(), b.end());
    // printf("%d\n", max(stoi(a), stoi(b)));

}