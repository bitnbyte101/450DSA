/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;

vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
{
    int i = 0;
    int j = 0;
    int k = 0;
    vector<int>common_elements;
    while(i<n1 && j<n2 && k<n3){
        
        int mi = min({A[i],B[j],C[k]});
        
        if(A[i]==mi && B[j]==mi && C[k]==mi){
            common_elements.push_back(mi);
        }
        
        if(A[i]==mi){
            while(i<n1 && A[i]==mi)
                i++;
        }
        
        if(B[j]==mi){
            while(j<n2 && B[j]==mi)
                j++;
        }
        
        if(C[k]==mi){
            while(k<n3 && C[k]==mi)
                k++;
        }
    }
    
    return common_elements;
}
 
 
void solve(){
    int n1;
    cin>>n1;
    
    int n2;
    cin>>n2;
    
    int n3;
    cin>>n3;
    
    int A[n1];
    int B[n2];
    int C[n3];
    
    for(int i=0;i<n1;i++){
        cin>>A[i];
    }
    
    for(int j=0;j<n2;j++){
        cin>>B[j];
    }
    
    for(int k=0;k<n3;k++){
        cin>>C[k];
    }
    
    vector<int>ans = commonElements(A,B,C,n1,n2,n3);
    
    cout<<"Common Elements are : ";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
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
    // cin>>tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}
 
/*--------- The End -----------*/