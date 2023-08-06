/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    
    int n;
    cin>>n;
    
    //input an array
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    //Kaden's Algo
    
    int currSum = 0;
    int mxSum = INT_MIN;
    
    for(int i=0;i<n;i++){
        currSum += arr[i];
        mxSum = max(mxSum,currSum);
        if(currSum<0){
            currSum = 0;
        }   
    }
    
    //output
    cout<<"MAX SUBARRAY SUM : "<<mxSum<<endl;
    return;
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