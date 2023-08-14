/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;

bool find2Numbers(int start,int end,int req,int A[])
{
    while(start<end){
        
        if(A[start]+A[end]==req)
            return true;
        if(A[start]+A[end]>req)
            end--;
        if(A[start]+A[end]<req)
            start++;
    }
    
    return false;
}

bool find3Numbers(int A[], int n, int X)
{
    sort(A,A+n);
    
    for(int i=0;i<n;i++)
    {
        if(find2Numbers(i+1,n-1,X-A[i],A)){
            return true;
        }
    }
    
    return false;
}
 
void solve(){
    
    int n;
    cin>>n;
    
    int X;
    cin>>X;
    
    int A[n];
    
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    
    cout<<find3Numbers(A,n,X)<<endl;
    
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