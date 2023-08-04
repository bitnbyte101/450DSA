/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    
    int n;
    cin>>n;
    
    int m;
    cin>>m;
    
    int a[n];
    int b[m];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    
    vector<int>uni;
    vector<int>inter;
    
    int i = 0;
    int j = 0;
    
    while(i<n && j<m){
        if(a[i]<b[j]){
            uni.push_back(a[i]);
            i++;
        }
        else if(a[i]==b[j]){
            uni.push_back(a[i]);
            inter.push_back(a[i]);
            i++;
            j++;
        }
        else if(b[j]<a[i]){
            uni.push_back(b[j]);
            j++;
        }
        
        //condiiton - repetion
        while(i>0 && i<n && a[i]==a[i-1])
            i++;
        while(j>0 && j<m && b[j]==b[j-1])
            j++;
    }
    
    //condition Bacha hua array
    
    while(i<n){
        uni.push_back(a[i]);
        i++;
        while(i>0 && i<n && a[i]==a[i-1])
            i++;
    }
    
    while(j<m){
        uni.push_back(b[j]);
        j++;
        while(j>0 && j<m && b[j]==b[j-1])
            j++;
    }
    
    cout<<"UNION OF A & B is : ";
    for(auto it:uni){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<"INTERSECTION OF A & B is : ";
    for(auto it:inter){
        cout<<it<<" ";
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