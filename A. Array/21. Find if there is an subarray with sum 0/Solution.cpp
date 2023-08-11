/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;

bool subArrayExists(int arr[], int n)
{
    int sum = 0;
    unordered_map<int,int>freq;
    freq[sum]++;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
        if(freq[sum]>0){
            return true;
        }
        freq[sum]++;
    }
    return false;
}  

void solve(){
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    if(subArrayExists(arr,n)){
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
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