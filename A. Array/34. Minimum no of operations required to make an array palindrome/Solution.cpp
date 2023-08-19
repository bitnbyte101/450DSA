/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;
 
 
bool isPalindrome(int a){
    
    string s = to_string(a);
    int start = 0;
    int end = s.size()-1;
    
    bool flag = true;
    
    while(start<end){
        if(s[start]!=s[end]){
            flag = false;
            break;
        }
        start++;
        end--;
    }
    
    return flag;
} 
int PalinArray(int a[], int n)
{
    for(int i=0;i<n;i++){
        
        if(!isPalindrome(a[i])){
            return 0;
        }
    }
    
    return 1;
}
 
void solve(){
    
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<PalinArray(arr,n)<<endl;
    
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