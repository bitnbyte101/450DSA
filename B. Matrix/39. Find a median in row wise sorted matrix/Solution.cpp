/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;

int median(vector<vector<int>> &matrix, int R, int C){
        
    int mi = INT_MAX;
    int mx = INT_MIN;
    
    for(int i=0;i<R;i++){
        mi = min(mi,matrix[i][0]);
        mx = max(mx,matrix[i][C-1]);
    }
    int ans;
    while(mi<=mx){
        int mid = mi + (mx-mi)/2;
        
        int cnt = 0;
        
        for(int i=0;i<R;i++){
            cnt += upper_bound(matrix[i].begin(),matrix[i].end(),mid)-matrix[i].begin();
        }
        
        if(cnt>=(R*C+1)/2){
            ans = mid;
            mx = mid-1;
        }
        else
        {
            mi = mid+1;
        }
    }
    
    return ans;
    // code here          
}
 
void solve(){
    
    int R,C;
    cin>>R>>C;
    
    vector<vector<int>>matrix(R,vector<int>(C));
    
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cin>>matrix[i][j];
        }
    }
    
    cout<<"Median is : "<<median(matrix,R,C)<<endl;
    
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