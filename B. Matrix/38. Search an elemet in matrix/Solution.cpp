/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
    int row = -1;
    
    int n = matrix.size();
    int m = matrix[0].size();
    int l = 0; 
    int r = n-1;
    
    while(l<=r){
        int mid = l+(r-l)/2; // there can be integer overflow if we write (l+r)/2
        
        if(matrix[mid][0]<=target){
            row = mid;
            l = mid+1;
        }
        else
        {
            r = mid-1;
        }
    }
    
    if(row==-1)
        return false;
    
    l = 0;
    r = m-1;
    
    while(l<=r){
        
        int mid = l+(r-l)/2; // there can be integer overflow if we write (l+r)/2
        
        if(matrix[row][mid]==target){
            return true;
        }
        else if(matrix[row][mid]>target){
            r = mid-1;
        }
        else
        {
             l =mid+1;
        }
    }
    
    return false;
}
 
void solve(){
    
    int n,m,target;
    cin>>n>>m>>target;
    
    vector<vector<int>>matrix(n,vector<int>(m));
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    
    if(searchMatrix(matrix,target)){
        cout<<"YES, IT IS PRESENT"<<endl;
    }
    else
    {
        cout<<"NO, IT IS NOT PRESENT"<<endl;
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