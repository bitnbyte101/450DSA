/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;
 
int minJumps(int arr[], int n){
    
    int range = arr[0];
    int ans = 0;
    int i = 0;
    
    while(range<n-1){
        
        int temp = range;
        
        while(i<n && i<=range){
            temp = max(temp,arr[i]+i);
            i++;
        }
        
        if(temp==range && i<n){
            return -1;
        }
        
        range = temp;
        ans++;
        
    }
    
    return ans+1;
        
} 
void solve(){
    
    int n;
    cin>>n;
    
    int arr[n];
    
    //input an array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"ANS: "<<minJumps(arr,n)<<endl;
    
    
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