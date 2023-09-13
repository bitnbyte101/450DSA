/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;

//approach 2 ->sorting

vector<pair<char,int>> getDuplicates(string s){
	int n = s.size();
	
	sort(s.begin(),s.end());
	
	vector<pair<char,int>>ans;
	
	for(int i=0;i<n;i++){
		int cnt = 1;
		
		while(i<n-1 && s[i]==s[i+1]){
			cnt++;
			i++;
		}
		
		if(cnt>1){
			ans.push_back({s[i],cnt});
		}
	}
	
	return ans;
}


//approach 1 -> map
// vector<pair<char,int>>	getDuplicates(string s){
// 	unordered_map<char,int> freq;
// 	int n = s.size();
	
// 	for(int i=0;i<n;i++){
// 		freq[s[i]]++;
// 	}
	
// 	vector<pair<char,int>>ans;
	
// 	for(auto it:freq){
// 		if(it.second>1){
// 			ans.push_back({it.first,it.second});
// 		}
// 	}
	
// 	return ans;
// }
 
void solve(){
	
	string s;
	cin>>s;
	
	vector<pair<char,int>>ans = getDuplicates(s);
	
	for(auto it:ans){
		cout<<it.first<<"->"<<it.second<<endl;
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