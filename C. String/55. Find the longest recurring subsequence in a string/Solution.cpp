/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;
 
int LongestRepeatingSubsequence(string str){
	
	int n = str.size();
	vector<vector<int>>dp(n+1,vector<int>(n+1,0));
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(str[i-1]==str[j-1] && i!=j){
				dp[i][j] = dp[i-1][j-1]+1;
			}
			else
			{
				dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
	
	return dp[n][n];
	
} 
void solve(){
	
	string s;
	cin>>s;
	
	cout<<LongestRepeatingSubsequence(s)<<endl;
	
    
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
    cin>>tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}
 
/*--------- The End -----------*/