#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string A[n];

    for(int i=0; i<n; i++){
        cin >> A[i];

        if(A[i].length()<=10)
            cout << A[i] << endl;
        else{
            cout << A[i].front() << A[i].length()-2 << A[i].back() << endl;
        }

    }


    return 0;
}
