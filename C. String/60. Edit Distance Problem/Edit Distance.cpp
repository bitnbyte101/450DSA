/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;

//Top-Down or Memoisation

// vector<vector<int>>dp;
// int helper(string &s,string &t,int i,int j){
//     if(i==0){
//         return j;
//     }
//     if(j==0){
//         return i;
//     }
    
//     if(dp[i][j]!=-1){
//         return dp[i][j];
//     }
    
//     int insert,dlt,rep;
    
//     insert = 1+helper(s,t,i,j-1);
//     dlt = 1+helper(s,t,i-1,j);
//     if(s[i-1]==t[j-1]){
//         rep = helper(s,t,i-1,j-1);
//     }
//     else
//     {
//         rep = 1+helper(s,t,i-1,j-1);
//     }
    
//     return dp[i][j] = min({insert,dlt,rep});
// }
// int editDistance(string s, string t) {
    
//     int n = s.size();
//     int m = t.size();
//     dp.resize(n+1,vector<int>(m+1,-1));
//     return helper(s,t,n,m);
// }
 

// Bottom-Up or Tabulation
int editDistance(string s, string t) {
    int n = s.size();
    int m = t.size();
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0 && j==0){
                dp[i][j] = 0;
            }
            else if(i==0){
                dp[i][j] = dp[i][j-1]+1;
            }
            else if(j==0){
                dp[i][j] = dp[i-1][j]+1;
            }
            else{
                int insert,dlt,rep;
                if(s[i-1]==t[j-1]){
                    rep = dp[i-1][j-1];
                }
                else{
                    rep = dp[i-1][j-1]+1;
                }
                insert = 1+dp[i][j-1];
                dlt = 1+dp[i-1][j];
                dp[i][j] = min({insert,dlt,rep});
            }
        }
    }
    return dp[n][m];
} 
 

 
void solve(){
    string s,t;
    cin>>s;
    cin>>t;
    
    cout<<editDistance(s,t)<<endl;
}



/*------ Main function --------*/

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    
    int tc=1;
    // cin>>tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}
 
/*--------- The End -----------*/