/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;

int smallestSubWithSum(int arr[], int n, int x)
{
    int i = 0;
    int j = 0;
    int sum = 0;
    int len = INT_MAX; 
    
    while(j<n){
        
        sum += arr[j];
        
        while(sum-arr[i]>x){
            sum -= arr[i];
            i++;
        }
        
        if(sum>x){
            len = min(len,j-i+1);
        }
        
        j++;
    }
    
    if(len == INT_MAX)
        return 0;
    
    return len;
}
 
void solve(){
    
    int n;
    cin>>n;
    
    int x;
    cin>>x;
    
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<smallestSubWithSum(arr,n,x)<<endl;
    
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