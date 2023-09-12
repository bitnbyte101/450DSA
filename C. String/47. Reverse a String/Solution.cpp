/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;


//normal apprach
// void reverseString(vector<char>& s) {

//     int n = s.size();

//     for(int i=0;i<n/2;i++){
//         int temp = s[i];
//         s[i] = s[n-i-1];
//         s[n-i-1] = temp;
//     }
//  }

//recurssive approach
void recurssiveReverse(vector<char>&s,int i){
    int n = s.size();
    if(i>=n/2){
        return;
    }

    int temp = s[i];
    s[i] = s[n-i-1];
    s[n-i-1] = temp;

    recurssiveReverse(s,i+1);
}
void reverseString(vector<char>& s) {
    recurssiveReverse(s,0);
}
 
void solve(){
	int n;
	cin>>n;
	
	vector<char>s(n);
	
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	
	reverseString(s);
	
	for(int i=0;i<n;i++){
		cout<<s[i];
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