/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;
 
 
string isSubset(int a1[], int a2[], int n, int m) {
    
    unordered_map<int,int>mp1;
    unordered_map<int,int>mp2;
    
    for(int i=0;i<n;i++){
        mp1[a1[i]]++;
    }
    
    for(int j=0;j<m;j++){
        mp2[a2[j]]++;
    }
    
    for(auto it:mp2){
        if(mp1[it.first]<it.second){
            return "No";
        }
    }
    
    return "Yes";
}
 
void solve(){
    
    int n;
    cin>>n;
    
    int m;
    cin>>m;
    
    int a1[n];
    int a2[m];
    
    for(int i=0;i<n;i++){
        cin>>a1[i];
    }
    
    for(int j=0;j<m;j++){
        cin>>a2[j];
    }
    
    cout<<isSubset(a1,a2,n,m)<<endl;
    
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
    cin>>tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}
 
/*--------- The End -----------*/