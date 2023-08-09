/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;
 
int getPairsCount(int arr[], int n, int k) {
    
    map<int,int>freq;
    int ans = 0;
    for(int i=0;i<n;i++){
        ans += freq[k-arr[i]];
        freq[arr[i]]++;
    }
    return ans;
} 

void solve(){
    
    int n;
    cin>>n;
    
    int k;
    cin>>k;
    
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int ans = getPairsCount(arr,n,k);
    
    cout<<ans<<endl;
    
    
    
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