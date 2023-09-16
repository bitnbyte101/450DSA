/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;

bool areRotations(string s1,string s2)
{
	if(s1.size()!=s2.size()){
		return false;
	}
	string concat = s1+s1;
	
	int ind = concat.find(s2);
	if(ind==-1){
		return false;
	}
	return true;
}
 
void solve(){
	string s1,s2;
	cin>>s1>>s2;
	
	if(areRotations(s1,s2)){
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
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