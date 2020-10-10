#include<bits/stdc++.h>

using namespace std;

int main(){
    int n1, n2;
    cin >> n1 >> n2;
    long long int res = 0;
    for (int i=n2;i>=n1;i--){
        for (int h1=0;h1<3;++h1){
            for (int h0=0;h0<10;++h0){
                if (h1 == 2 && h0 > 3)continue;
                for (int m1=0;m1<6;++m1){
                    for (int m0=0;m0<10;++m0){
                        
                    }
                }
            }
        }
    }
    cout << res;
    return 0;
}

/*
nhhmmss
i : n2 -> n1{
    s[0] = i
    h[1] = s[1] : h[1] : 0 -> 2 && s[1] : 0 -> 5
    h[0] = m[0] : h[0] : 0 -> 9 && m[0] : 0 -> 9
    m[1] = m[1] : m[1] : 0 -> 5

    res += 1*3*10*6
}
*/

/*
n  h  h  m  m  s  s
|  |  |  |  |  |  |
10 3 10  6  10 6  10


*/