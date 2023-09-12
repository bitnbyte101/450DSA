/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;

int isPalindrome(string s)
{
	int st = 0;
	int end = s.size()-1;
	
	int is_palindrome = 1;
	while(st<end){
		if(s[st]!=s[end]){
			is_palindrome = 0;
			break;
		}
		st++;
		end--;
	}
	
	return is_palindrome;
}
 
void solve(){
	
	string s;
	cin>>s;
	
	if(isPalindrome(s)){
		cout<<"String "<<s<<" is Palindrome"<<endl;
	}
	else{
		cout<<"String "<<s<<" is not Palindrome"<<endl;
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
    cin>>tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}
 
/*--------- The End -----------*/