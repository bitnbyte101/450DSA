/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;
 
int maxDiff(vector<vector<int>>&matrix,int n){
	
	vector<vector<int>>maxMat(n,vector<int>(n));
	
	maxMat[n-1][n-1] = matrix[n-1][n-1];
	
	for(int j=n-2;j>=0;j--){
		maxMat[n-1][j] = max(matrix[n-1][j],maxMat[n-1][j+1]);
	}
	
	for(int i=n-2;i>=0;i--){
		maxMat[i][n-1] = max(matrix[i][n-1],maxMat[i+1][n-1]);
	}
	
	for(int i=n-2;i>=0;i--){
		for(int j=n-2;j>=0;j--){
			maxMat[i][j] = max({maxMat[i+1][j],maxMat[i][j+1],matrix[i][j]});
		}
	}
	
	int ans = INT_MIN;
	
	for(int a=0;a<n-1;a++){
		for(int b=0;b<n-1;b++){
			ans = max(ans,maxMat[a+1][b+1]-matrix[a][b]);
		}
	}
	
	return ans;
}
 
void solve(){
	
	int n;
	cin>>n;
	
	vector<vector<int>>matrix(n,vector<int>(n));
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>matrix[i][j];
		}
	}
	
	cout<<"MAX VALUE IS :"<<maxDiff(matrix,n)<<endl;
    
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