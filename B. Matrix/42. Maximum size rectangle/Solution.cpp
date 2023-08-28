/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;

# define MAX 1000

vector<int> getPsei(vector<int>&arr,int m){
	stack<int>s;
	vector<int>psei(m,-1);
	
	for(int i=0;i<m;i++){
		while(!s.empty() && arr[s.top()]>=arr[i]){
			s.pop();
		}
		
		if(!s.empty()){
			psei[i] = s.top();
		}
		
		s.push(i);
	}
	
	return psei;
}

vector<int> getNsei(vector<int>&arr,int m){
	
	stack<int>s;
	vector<int>nsei(m,m);
	
	for(int i=m-1;i>=0;i--){
		while(!s.empty() && arr[s.top()]>=arr[i]){
			s.pop();
		}
		
		if(!s.empty()){
			nsei[i] = s.top();
		}
		
		s.push(i);
	}
	
	return nsei;
	
}

int MaxRectAreaHist(vector<int>&arr,int m){
	
	vector<int>psei = getPsei(arr,m);
	vector<int>nsei = getNsei(arr,m);
	
	int max_area_rect_hist = 0;
	
	for(int i=0;i<m;i++){
		int h = arr[i];
		int w = nsei[i]-psei[i]-1;
		
		max_area_rect_hist = max(max_area_rect_hist,h*w);
	}
	
	return max_area_rect_hist;
	
}

int maxArea(int M[MAX][MAX], int n, int m) {
	
	vector<int>histogram(m,0);
	
	int max_area = 0;
	for(int i=0;i<n;i++){
		
		for(int j=0;j<m;j++){
			if(M[i][j]==1){
				histogram[j]++;
			}
			else
			{
				histogram[j] = 0;
			}
		}
		
		max_area = max(max_area,MaxRectAreaHist(histogram,m));
	}
	
	return max_area;

}
 
void solve(){
	
	int n,m;
	cin>>n>>m;
	
	int M[MAX][MAX];
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>M[i][j];
		}
	}
	
	cout<<"MAX AREA OF RECTANGLE FORMED FROM 1's : "<<maxArea(M,n,m)<<endl;
    
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