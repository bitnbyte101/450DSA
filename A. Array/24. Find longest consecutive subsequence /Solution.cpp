/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;
 
int findLongestConseqSubseq(int arr[], int N)
{
    vector<int> isPresent(100006,0);
    
    for(int i=0;i<N;i++){
        isPresent[arr[i]] = 1;
    }
    
    int cnt = 0;
    int ans = 0;
    
    for(int i=0;i<100006;i++){
        if(isPresent[i]){
            cnt++;
        }
        else
        {
            cnt = 0;
        }
        ans = max(ans,cnt);
    }
    
    return ans;
} 

void solve(){
    
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int ans = findLongestConseqSubseq(arr,n);
    
    cout<<"LONGEST CONSECUTIVE SUBSEQ : "<<ans<<endl;
    
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