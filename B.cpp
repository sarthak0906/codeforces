#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a=1,b=n-1;
        for (int i=2;i<n;++i){
            if (n%i == 0){
                // cout << "here \n";
                a = n/i;
                b = n-a;
                break;
            }
        }
        cout << a << " " << b << endl;
    }
}