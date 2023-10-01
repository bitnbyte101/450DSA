/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;

string longestPalin (string s) {
    
    int n = s.size();
    string ans = "";
    for(int i=0;i<n;i++){
    	
    	//odd length PS 
    	int prev = i-1;
    	int next = i+1;
    	
    	while(prev>=0 && next<n && s[prev]==s[next]){
    		prev--;
    		next++;
    	}
    	
    	if(next-prev-1>ans.size()){
    		ans = s.substr(prev+1,next-prev-1);
    	}
    	
    	//even length PS
    	prev = i;
    	next = i+1;
    	
    	while(prev>=0 && next<n && s[prev]==s[next]){
    		prev--;
    		next++;
    	}
    	
    	if(next-prev-1>ans.size()){
    		ans = s.substr(prev+1,next-prev-1);
    	}
    }
    
    return ans;
}
 
void solve(){
	
	string s;
	cin>>s;
	
	cout<<longestPalin(s)<<endl;
    
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