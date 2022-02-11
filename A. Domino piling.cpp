#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n, a, s=0;
    cin >> m >> n;

    a = m * n;

    while(a>=2){
        a = a - 2;
        s++;
    }

    cout << s << endl;

    return 0;
}