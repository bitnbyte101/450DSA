/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;

#define MAX 1000

int kthSmallest(int mat[MAX][MAX], int n, int k)
{
	vector<int>row_pointer(n,0);
	
	priority_queue<pair<int,int>>pq;
	
	for(int i=0;i<min(n,k);i++){
		pq.push({-mat[i][0],i});
	}
	//k-1 pop
	while(--k){
		
		int row_index = pq.top().second;
		pq.pop();
		
		if(row_pointer[row_index]<n-1){
			row_pointer[row_index]++;
			pq.push({-mat[row_index][row_pointer[row_index]],row_index});
		}
	}
	
	return -pq.top().first;
	
		
}
 
void solve(){
	
	int n,k;
	cin>>n>>k;
	
	int mat[MAX][MAX];
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>mat[i][j];
		}
	}
	
	cout<<kthSmallest(mat,n,k)<<endl;
    
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