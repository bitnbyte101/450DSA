/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    
    int n;
    cin>>n;
    
    int k;
    cin>>k;
    
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    priority_queue<int>mx;
    priority_queue<int,vector<int>,greater<int>>mi;
    
    for(int i=0;i<n;i++){
        if(mx.size()<k){
            mx.push(arr[i]);
        }
        else
        {
            if(mx.top()>arr[i]){
                mx.pop();
                mx.push(arr[i]);
            }
        }
    }
    
    for(int i=0;i<n;i++){
        if(mi.size()<k){
            mi.push(arr[i]);
        }
        else
        {
            if(mi.top()<arr[i]){
                mi.pop();
                mi.push(arr[i]);
            }
        }
    }
    
    //output
    cout<<"K-th Largest :"<<mi.top()<<" "<<"Kth-Smallest : "<<mx.top()<<endl;
    
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