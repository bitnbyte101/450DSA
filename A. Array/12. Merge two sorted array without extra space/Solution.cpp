/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    
    int m;
    cin>>m;
    
    int arr1[n];
    int arr2[m];
    
    //input arrays
    
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    
    for(int j=0;j<m;j++){
        cin>>arr2[j];
    }
    
    int i = n-1;
    int j = 0;
    
    while(i>=0 && j<m){
        if(arr1[i]>arr2[j]){
            swap(arr1[i],arr2[j]);
            i--;
            j++;
        }
        else
            break;
    }
    
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    
    //output
    
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
    for(int j=0;j<m;j++){
        cout<<arr2[j]<<" ";
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