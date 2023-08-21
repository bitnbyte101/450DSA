/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;

vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
{
    int rs = 0;
    int cs = 0;
    int re = r-1;
    int ce = c-1;
    
    vector<int>ans;
    
    while(cs<=ce && rs<=re){
        
        for(int col = cs;col<=ce;col++){
            ans.push_back(matrix[rs][col]);
        }
        rs++;
        
        for(int row = rs; row<=re; row++){
            ans.push_back(matrix[row][ce]);
        }
        ce--;
        
        if(rs<=re){
            
            for(int col = ce;col>=cs;col--){
                ans.push_back(matrix[re][col]);
            }
            re--;
        }
            
        if(cs<=ce){
            
            for(int row = re;row>=rs;row--){
                ans.push_back(matrix[row][cs]);
            }
            cs++;
        }
        
    }
    
    return ans;

}
 
void solve(){
    
    int r,c;
    cin>>r>>c;
    
    vector<vector<int>>matrix(r,vector<int>(c));
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>matrix[i][j];
        }
    }
    
    vector<int> ans = spirallyTraverse(matrix,r,c);
    
    for(int i=0;i<r*c;i++){
        cout<<ans[i]<<" ";
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