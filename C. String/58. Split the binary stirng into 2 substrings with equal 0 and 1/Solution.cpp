/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;
 
 
int maxSubStr(string str){
    int ans = 0;
    int sum = 0;
    int n =str.size();
    
    for(int i=0;i<n;i++){
        if(str[i]=='0'){
            sum -= 1;
        }
        else
        {
            sum += 1;
        }
        if(sum==0){
            ans++;
        }
    }
    
    if(sum!=0){
        return -1;
    }
    
    return ans;
}
     
void solve(){
    string s;
    cin>>s;
    
    cout<<maxSubStr(s)<<endl;
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