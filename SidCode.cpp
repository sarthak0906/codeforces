#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long int i=1;
        while(1){
            cout << "i = " << i << endl;
            cout << i*(i+1)*(2*i + 1)/6 << endl;
            if (i*(i+1)*(2*i + 1) == 6*n){
                cout << i << endl;
                break;
            }
            if (i*(i+1)*(2*i + 1) > 6*n){
                cout << i << endl;
                break;
            }
            if (i*(i+1)*(2*i + 1) < 6*n)i++;
        }
    }
    return 0;
}