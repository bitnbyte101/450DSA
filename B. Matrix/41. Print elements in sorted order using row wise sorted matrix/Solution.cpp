/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> sortedMatrix(int n, vector<vector<int>> Mat) {
    
    vector<int>elements;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            elements.push_back(Mat[i][j]);
        }
    }
    
    sort(elements.begin(),elements.end());
    
    int curr = 0;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            Mat[i][j] = elements[curr];
            curr++;
        }
    }
    
    return Mat;
}
 
void solve(){
    
    int n;
    cin>>n;
    
    vector<vector<int>>Mat(n,vector<int>(n));
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>Mat[i][j];
        }
    }
    
    Mat = sortedMatrix(n,Mat);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<Mat[i][j]<<" ";
        }
        cout<<endl;
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