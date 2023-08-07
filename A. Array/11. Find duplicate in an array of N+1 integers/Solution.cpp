/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    
    int n;
    cin>>n;
    
    int arr[n];
    int total = 0;
    //input an array
    for(int i=0;i<n;i++){
        cin>>arr[i];
        total += arr[i];
    }
    
    int SumOfFirstN = (n*(n-1))/2;
    //output
    
    cout<<"Repeated element is : "<<total- SumOfFirstN<<endl;
    
    
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