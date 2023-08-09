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
    
    int curr_min = INT_MAX;
    int max_profit = 0;
    for(int i=0;i<n;i++){
        curr_min = min(curr_min,arr[i]);
        max_profit = max(max_profit,arr[i]-curr_min);
    }
    
    cout<<"MAX PROFIT POSSIBLE IS : "<<max_profit<<endl;
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