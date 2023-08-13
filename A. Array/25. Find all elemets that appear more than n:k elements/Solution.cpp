/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;
 
 
vector<int> MooresVotingAlgo(int arr[],int n,int k){
    
    int candidates[k-1];
    int freq[k-1];
    
    for(int i=0;i<k-1;i++){
        candidates[i] = INT_MIN;
        freq[i] = 0;
    }
    
    for(int i=0;i<n;i++){
        
        int curr = arr[i];
        
        int j;
        for(j=0;j<k-1;j++){
            if(candidates[j]==curr){
                freq[j]++;
                break;
            }
        }
        
        if(j==k-1){
            int vacant;
            for(vacant=0;vacant<k-1;vacant++){
                if(freq[vacant]==0){
                    candidates[vacant] = curr;
                    freq[vacant] = 1;
                    break;
                }
            }
            
            if(vacant==k-1){
                for(int l=0;l<k-1;l++){
                    freq[l]--;
                }
            }
        }
        
    }
    
    // candidates -> potantial candidates
    
    vector<int>ans;
    
    for(int i=0;i<k-1;i++){
        if(candidates[i]==INT_MIN){
            continue;
        }
        
        int cnt = 0;
        
        for(int j=0;j<n;j++){
            if(arr[j]==candidates[i]){
                cnt++;
            }
        }
        
        if(cnt>n/k){
            ans.push_back(candidates[i]);
        }
    }
    
    return ans;
    
} 

void solve(){
    
    int n;
    cin>>n;
    
    int k;
    cin>>k;
    
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    vector<int> ans = MooresVotingAlgo(arr,n,k);
    
    cout<<"Elements having freq greater than n/k ("<<n/k<<") :"<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
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