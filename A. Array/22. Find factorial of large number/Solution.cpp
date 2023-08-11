/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;
 
vector<int> factorial(int N){
        
       vector<int>fact;
       fact.push_back(1);
       
       for(int i=2;i<=N;i++){
            
            int carry = 0;
            
            for(int j=0;j<fact.size();j++){
                int product = fact[j]*i;
                product += carry;
                carry = product/ 10;
                fact[j] = product % 10;
            }
            
            if(carry){
                while(carry){
                    fact.push_back(carry%10);
                    carry /= 10;
                }
            }
       } 
       
       reverse(fact.begin(),fact.end());
       
       return fact;
} 
void solve(){
    
    int n;
    cin>>n;
    
    vector<int>ans = factorial(n);
    
    //output
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
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