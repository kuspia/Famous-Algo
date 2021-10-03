#include<bits/stdc++.h>
using namespace std;

int editDistance(string s, string t) {
        // Code here
        /*
            
                    NULL    g   e   s   e   k
            NULL     0      1   2   3   4   5
             g       1      0   1   2   3   4
             e       2      1   0   1   2   3
             e       3      2   1   1   1   2
             k       4      3   2   2   2   1
        */
        
        vector<vector<int>> dp(s.length()+1, vector<int>(t.length()+1));
        
        for(int i = 0; i < dp.size(); i++){
            dp[i][0] = i;
        }
        
        for(int i = 0; i < dp[0].size(); i++){
            dp[0][i] = i;
        }
        
        for(int i = 1; i < dp.size(); i++){
            for(int j = 1; j < dp[0].size(); j++){
                if(s[i-1] != t[j-1]){
                    dp[i][j] = 1 + min(dp[i-1][j], min(dp[i][j-1], dp[i-1][j-1]));
                }
                else{
                    dp[i][j] = dp[i-1][j-1];
                }
            }
        }
        return dp[s.length()][t.length()];
    }

int main(){
    string s, t;
    cin >> s;
    cin >> t;
    cout << editDistance(s, t) << endl;
    return 0;
}