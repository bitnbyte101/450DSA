/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;

long long trappingWater(int arr[], int n){
    
    int l[n];
    int r[n];
    l[0] = arr[0];
    r[n-1] = arr[n-1];
    
    for(int i=1;i<n;i++){
        l[i] = max(l[i-1],arr[i]);
    }
    
    for(int i=n-2;i>=0;i--){
        r[i] = max(r[i+1],arr[i]);
    }
    
    long long trappedWater = 0;
    
    for(int i=0;i<n;i++){
        int limit = min(l[i],r[i]);
        trappedWater += limit-arr[i];
    }
    
    return trappedWater;
}
 
void solve(){
    
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<trappingWater(arr,n)<<endl;
    
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