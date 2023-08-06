/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    
    int n;
    cin>>n;
    
    //input an array
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    //logic to cyclically rotate an array bye one position
    int last = arr[n-1];
    
    for(int i=n-1;i>0;i--)
    {
        arr[i] = arr[i-1];
    }
    
    arr[0] = last;
    
    //output
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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