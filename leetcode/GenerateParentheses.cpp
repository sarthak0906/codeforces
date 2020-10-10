#include<bits/stdc++.h>

using namespace std;

vector<vector<string> > dp;

vector<string> solve(int n){
    if (n == 0){
        cout << "Zeroed\n";
        return {""};
    }
    if (dp[n].size() != 0){
        cout << dp[n].size() << endl;
        for (auto i:dp[n]) cout << i << " ";
        cout << endl;
        return dp[n];
    }
    vector<string> ret;
    for (int i=1;i<=n;++i){
        cout << "i = " << i << " & n = " << n << endl;
        vector<string> in = solve(n-i);
        vector<string> out= solve(i-1);
        for (auto j:in){
            for (auto k:out){
                string a = "(" + j + ")" + k;
                cout << a << endl;
                ret.push_back(a);
            }
        }
    }
    dp[n] = ret;
    return ret;
}

vector<string> generateParenthesis(int n) {
    if (n == 0) return {};
    if (n == 1) return {"()"};
    dp = vector<vector<string> > (n+1, vector<string>(0));
    dp[0] = {""};
    dp[1] = {"()"};
    return solve(n);
}

int main(){
    auto vec = generateParenthesis(3);
    for (auto i:vec) cout << i << " ";
    return 0;
}