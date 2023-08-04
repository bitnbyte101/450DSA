/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    
    int n;
    cin>>n;
    int arr[n];
    
    //input an array
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int start = 0;
    
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            swap(arr[i],arr[start]);
            start++;
        }
    }
    
    //output
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return;
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