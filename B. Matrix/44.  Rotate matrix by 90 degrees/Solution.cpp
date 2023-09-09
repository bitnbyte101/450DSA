/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int> >& matrix)
{
    int n = matrix.size();
    
    for(int i=0;i<n/2;i++){
    	for(int j=i;j<n-i-1;j++){
    		int temp = matrix[i][j];
    		matrix[i][j] = matrix[j][n-i-1];
    		matrix[j][n-i-1] = matrix[n-i-1][n-j-1];
    		matrix[n-i-1][n-j-1] = matrix[n-j-1][i];
    		matrix[n-j-1][i] = temp;
    	}
    }
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
	
	rotate(matrix);
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
    
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