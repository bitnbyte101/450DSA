/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int fb = INT_MAX;
    int fs = 0;
    int sb = INT_MIN;
    int ss = 0;
    
    for(int i=0;i<n;i++){
        
        fb = min(fb,arr[i]);
        fs = max(fs,arr[i]-fb);
        sb = max(sb,fs-arr[i]);
        ss = max(ss,sb+arr[i]);
    }   
    
    cout<<"MAX PROFIT IS : "<<ss<<endl;
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