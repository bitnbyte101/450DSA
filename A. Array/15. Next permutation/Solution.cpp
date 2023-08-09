/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;
 
void nextPermutation(vector<int>& nums) {
    int n = nums.size();    
    int p = n-2;        
    
    while(p>=0 && nums[p]>=nums[p+1])
    {
        p--;
    }
    
    sort(nums.begin()+p+1,nums.end());
    
    if(p==-1)
        return;
    
    int JGE_IND = upper_bound(nums.begin()+p+1,nums.end(),nums[p])-nums.begin();
    
    swap(nums[p],nums[JGE_IND]);
    
    return;
}
 
void solve(){
    
    int n;
    cin>>n;
    
    vector<int>v(n);
    
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    nextPermutation(v);
    
    //output
    
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
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