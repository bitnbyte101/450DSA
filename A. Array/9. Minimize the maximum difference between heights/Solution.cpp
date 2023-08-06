/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    
    int n;
    cin>>n;
    
    int k;
    cin>>k;
    
    int arr[n];
    
    //input an array
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    //logic
    sort(arr,arr+n);
    int mi,mx;
    int ans = arr[n-1]-arr[0];
    for(int i=0;i<n-1;i++){
        if(arr[i+1]-k<0)
            continue;
        mi = min(arr[0]+k,arr[i+1]-k);
        mx = max(arr[n-1]-k,arr[i]+k);
        ans = min(ans,mx-mi);
    }
    
    //output
    cout<<"Min Diff : "<<ans<<endl;
    
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