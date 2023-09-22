/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;

//approach 2 : sorting
bool isValidShuffle(string s1,string s2,string result){
	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());
	sort(result.begin(),result.end());
	
	int i = 0;
	int j = 0;
	int k = 0;
	
	bool flag = true;
	while(k<result.size()){
		if(i<s1.size() && s1[i]==result[k]){
			i++;
			k++;
		}
		else if(j<s2.size() && s2[j]==result[k]){
			j++;
			k++;
		}
		else
		{
			flag = false;
			break;
		}
		
	}
	
	return flag;
	
	
}

//approach 1 : frequency
// bool isValidShuffle(string s1,string s2,string result){
	
// 	unordered_map<char,int>freq;
	
// 	for(int i=0;i<s1.size();i++){
// 		freq[s1[i]]++;
// 	}
	
// 	for(int j=0;j<s2.size();j++){
// 		freq[s2[j]]++;
// 	}
	
// 	bool flag = true;
	
// 	for(int k=0;k<result.size();k++){
// 		if(freq[result[k]]==0){
// 			flag = false;
// 			break;
// 		}
		
// 		freq[result[k]]--;
		
// 		if(freq[result[k]]==0){
// 			freq.erase(result[k]);
// 		}
// 	}
	
// 	if(freq.size()>0){
// 		flag = false;
// 	}
	
// 	return flag;
// }
 
void solve(){
    string s1,s2,result;
    cin>>s1>>s2>>result;
    
    if(isValidShuffle(s1,s2,result)){
    	cout<<"YES it is shuffled"<<endl;
    }
    else
    {
    	cout<<"NO it is not"<<endl;
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