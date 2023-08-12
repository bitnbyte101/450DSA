/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;
 
 
long long maxProduct(vector<int> arr, int n) {
    
    long long ma = arr[0];
    long long mi = arr[0];
    
    long long mxProduct = ma;
    
    for(int i=1;i<n;i++){
        
        long long curr = arr[i];
        
        if(curr<0){
            swap(ma,mi);
        }
        
        ma = max(curr,ma*curr);
        mi = min(curr,mi*curr);
        
        mxProduct = max(mxProduct,ma);
    }
    
    return mxProduct;
    
} 

void solve(){
    
    int n;
    cin>>n;
    
    vector<int>arr(n);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    long long max_product = maxProduct(arr,n);
    
    cout<<"MAX SUBARRAY PRODUCT IS : "<<max_product<<endl;
    
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