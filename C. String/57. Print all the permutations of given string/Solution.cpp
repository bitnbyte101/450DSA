/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;
 
//1. Recurssive appraoch
set<string>st;
void recurssiveFunc(int i,string s)
{
    int n = s.size();
    if(i==n)
    {
        st.insert(s);
        return;
    }
    
    for(int j=i;j<n;j++){
        swap(s[i],s[j]);
        recurssiveFunc(i+1,s);
        swap(s[i],s[j]);
    }
}
vector<string>find_permutation(string S)
{
    recurssiveFunc(0,S);
    vector<string>ans;
    
    for(auto perm:st)
    {
        ans.push_back(perm);
    }
    
    return ans;
    // Code here there
}



//2. Iterative approach 
// int fact(int n)
// {
//     int ans = 1;
//     while(n--)
//     {
//         ans *= (n+1);
//     }
//     return ans;
// }

// vector<string>find_permutation(string S)
// {
//     int n = S.size();
//     int f = fact(n);
    
//     set<string>st;
//     for(int i=0;i<f;i++)
//     {
//         int dividend = i;
//         string temp = S;
//         string curr_perm = "";
        
//         for(int divisor = n;divisor>0;divisor--)
//         {
//             int r = dividend % divisor;
//             int q = dividend / divisor;
            
//             curr_perm += temp[r];
//             temp.erase(r,1);
//             dividend = q;
//         }
//         st.insert(curr_perm);
//     }
    
//     vector<string>ans;
//     for(auto it:st)
//     {
//         ans.push_back(it);
//     }
//     return ans;
//     // Code here there
// } 
void solve(){
	
	string s;
	cin>>s;
	vector<string>ans = find_permutation(s);
	for(auto it:ans)
	{
		cout<<it<<endl;
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
    // cin>>tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}
 
/*--------- The End -----------*/