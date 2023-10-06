/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;

vector<string>subsequences_rec;
//Approach 1 : Recurssion
// void recurssiveAllPossibleSubsequences(int i,string s,string prev){
// 	if(i==s.size()){
// 		if(prev.size())
// 			subsequences_rec.push_back(prev);
// 		return;
// 	}
	
// 	//choose
// 	recurssiveAllPossibleSubsequences(i+1,s,prev+s[i]);
// 	//reject
// 	recurssiveAllPossibleSubsequences(i+1,s,prev);
// }


//Appraoch 2 : using bit-masking
vector<string> AllPossibleStrings(string s){
	
	vector<string>total_sub;
	int n = s.size();
	for(int i=0;i<pow(2,n);i++){
		int curr = i;
		string temp = "";
		for(int i=0;i<=n;i++){
			if(curr & 1<<i){
				temp += s[i];
			}
		}	
		if(temp.size()){
			total_sub.push_back(temp);
		}
		
	}
	
	sort(total_sub.begin(),total_sub.end());
	return total_sub;
	
	// recurssiveAllPossibleSubsequences(0,s,"");
	// sort(subsequences_rec.begin(),subsequences_rec.end());
	// return subsequences_rec;
}
 
void solve(){
	
	string s;
	cin>>s;
	subsequences_rec.clear();
	vector<string>subsequences = AllPossibleStrings(s);
	
	for(int i=0;i<subsequences.size();i++){
		cout<<subsequences[i]<<endl;
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