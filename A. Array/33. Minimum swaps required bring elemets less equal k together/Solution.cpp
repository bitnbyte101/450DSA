/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;

int minSwap(int arr[], int n, int k) {
    
    int cnt = 0;
    
    for(int i=0;i<n;i++){
        if(arr[i]<=k){
            cnt++;
        }
    }
    
    int curr_wdw = 0;
    for(int i =0;i<cnt;i++){
        if(arr[i]<=k){
            curr_wdw++;
        }
    }
    
    int ans = cnt - curr_wdw;
    
    for(int i=cnt;i<n;i++){
        if(arr[i]<=k){
            curr_wdw++;
        }
        if(arr[i-cnt]<=k){
            curr_wdw--;
        }
        
        ans= min(ans, cnt - curr_wdw);
    }
    
    return ans;
}
 
void solve(){
    
    int n,k;
    cin>>n>>k;
    
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"MIN SWAPS REQUIRED : "<<minSwap(arr,n,k)<<endl;
    
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
