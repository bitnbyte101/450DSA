/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;

void threeWayPartition(vector<int>& arr,int a, int b)
{
    int n = arr.size();
    int start = 0;
    int end = n-1;
    int curr = 0;
    
    while(curr<=end){
        
        if(arr[curr]<a)
        {
            swap(arr[start],arr[curr]);
            start++;
            curr++;
        }
        else if(arr[curr]>=a && arr[curr]<=b){
            curr++;
        }
        else
        {
            swap(arr[curr],arr[end]);
            end--;
        }
    }
}
 
void solve(){
    
    int n;
    cin>>n;
    
    int a,b;
    cin>>a>>b;
    
    vector<int>arr(n);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    threeWayPartition(arr,a,b);
    
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
    // cin>>tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}
 
/*--------- The End -----------*/