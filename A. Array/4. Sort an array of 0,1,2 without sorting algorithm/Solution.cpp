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
    int curr = 0;
    int end = n-1;
    
    while(curr<=end){
        if(arr[curr]==0){
            swap(arr[curr],arr[start]);
            start++;
            curr++;
        }
        else if(arr[curr]==1){
            curr++;
        }
        else if(arr[curr]==2){
            swap(arr[curr],arr[end]);
            end--;
        }
    }
    
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