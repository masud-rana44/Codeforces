#include <bits/stdc++.h>
using namespace std;

int main() {
    int m[6][6], i, j, s1, s2, n, o;

    for(i=1; i<6; i++){
        for(j=1; j<6; j++){
            cin >> m[i][j];
            if(m[i][j]==1){
                n = i;
                o = j;
            }
        }
    }

    if(n<3)
        s1=3-n;
    else if(n>3)
        s1=n-3;

    if(o<3)
        s2=3-o;
    else if(o>3)
        s2=o-3;

    cout << s1 + s2 << endl;

    return 0;
}
