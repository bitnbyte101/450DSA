/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>&price){
    
    int fb = INT_MIN;
    int fs = 0;
    int sb = INT_MIN;
    int ss = 0;
    
    int n = price.size();
    
    for(int i=0;i<n;i++){
        
        fb = max(fb,-price[i]);
        fs = max(fs,price[i]+fb);
        sb = max(sb,-price[i]+fs);
        ss = max(ss,price[i]+sb);
    }
    
    return ss;
    
}
 
void solve(){
    
    int n;
    cin>>n;
    vector<int>price(n);
    
    for(int i=0;i<n;i++){
        cin>>price[i];
    }
    
    cout<<"MAX PROFIT IS : "<<maxProfit(price)<<endl;
    
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