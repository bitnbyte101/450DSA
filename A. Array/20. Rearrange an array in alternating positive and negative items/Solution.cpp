/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;
 
void rightRotataAnArray(int arr[],int n,int start,int end){
    int last_element  = arr[end];
    
    for(int i=end;i>start;i--){
        arr[i] = arr[i-1];
    }
    
    arr[start] = last_element;
} 
void solve(){
    
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    //logic without using extra space
    
    for(int i=0;i<n;i++){
        
        if(i%2==0 && arr[i]>=0){
            
            int j = i+1;
            
            while(j<n && arr[j]>=0){
                j++;
            }
            
            if(j<n){
                rightRotataAnArray(arr,n,i,j);
            }
            
        }
        else if(i%2==1 && arr[i]<0){
            
            int j = i+1;
            
            while(j<n && arr[j]<0){
                j++;
            }
            
            if(j<n){
                rightRotataAnArray(arr,n,i,j);
            }
            
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