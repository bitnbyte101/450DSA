/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;

vector<int> findCommonElements(vector<vector<int>> &mat)
{
	int n = mat.size();
	int m = mat[0].size();
	
    unordered_set<int>s;
    unordered_map<int,int>mp;
    
    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++){
    		s.insert(mat[i][j]);
    	}
    	
    	for(auto it:s){
    		mp[it]++;
    	}
    	
    	s.clear();
    }
    
    vector<int>ans;
    
    for(auto it:mp){
    	if(it.second==n){
    		ans.push_back(it.first);
    	}
    }
    
    return ans;
    
}
 
void solve(){
	
	int n,m;
	cin>>n>>m;
	
	vector<vector<int>>matrix(n,vector<int>(m));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>matrix[i][j];
		}
	}
	
	vector<int> ans = findCommonElements(matrix);
	
	for(auto it:ans){
		cout<<it<<" ";
	}
	
	cout<<endl;
    
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