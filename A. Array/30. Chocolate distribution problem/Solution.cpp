/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;

long long findMinDiff(vector<long long> a, long long n, long long m){
    
    long long ans = LLONG_MAX;
    
    sort(a.begin(),a.end());
    
    for(int i=0;i<n-m+1 ;i++){        // i+m-1<n -> i<n-m+1
        ans = min(ans,a[i+m-1]-a[i]);
    } 
    
    return ans;
    
} 
 
void solve(){
    long long n;
    cin>>n;
    
    long long m;
    cin>>m;
    
    vector<long long>a(n);
    
    for(long long i=0;i<n;i++){
        cin>>a[i];
    }
    
    cout<<"MINIMUM DIFFERENCE IS : "<<findMinDiff(a,n,m)<<endl;
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