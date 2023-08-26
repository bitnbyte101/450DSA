/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;

int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
    
    int max_ones = 0;
    int max_ones_row = -1;
    
    for(int i=0;i<n;i++){
        
        int curr_row_ones = m - (upper_bound(arr[i].begin(),arr[i].end(),0)-arr[i].begin());
        if(curr_row_ones>max_ones){
            max_ones = curr_row_ones;
            max_ones_row = i;
        }
    }
    
    return max_ones_row;
    
    
}
 
void solve(){
    
    int n,m;
    cin>>n>>m;
    
    vector<vector<int>>arr(n,vector<int>(m));
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    
    cout<<"ROW INDEX IS : "<<rowWithMax1s(arr,n,m)<<endl;

    
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