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
    
    int mx = INT_MIN;
    int mi = INT_MAX;
    
    for(int i=0;i<n;i++){
        if(arr[i]>mx){
            mx = arr[i];
        }
        if(arr[i]<mi){
            mi = arr[i];
        }
    }
    
    //output
    
    cout<<"MAX : "<<mx<<endl;
    cout<<"MIN : "<<mi<<endl;
    
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