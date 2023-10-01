/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;

string say(string s){
	
	if(s.size()==0){
		return "1";
	}
	
	string ans = "";
	int len = s.size();
	for(int i=0;i<len;i++){
		int cnt = 1;
		
		while(i<len-1 && s[i]==s[i+1]){
			i++;
			cnt++;
		}
		
		ans += to_string(cnt);
		ans += s[i];
	}
	
	return ans;
}

string countAndSay(int n) {
	
	string ans = "";
	while(n--){
		ans = say(ans);
	}
	return ans;
        
}
 
void solve(){
	
	int n;
	cin>>n;
	
	cout<<countAndSay(n)<<endl;
    
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