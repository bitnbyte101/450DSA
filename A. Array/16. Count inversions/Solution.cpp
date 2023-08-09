/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;

long long merge(long long l,long long mid,long long r,long long arr[]){
    
    long long n = mid-l+1;
    long long m = r-mid;
    
    long long arr1[n];
    long long arr2[m];
    
    for(int i=0;i<n;i++){
        arr1[i] = arr[l+i];
    }
    
    for(int j=0;j<m;j++){
        arr2[j]  = arr[mid+1+j];
    }
    
    long long i = 0;
    long long j = 0;
    
    long long k = l;
    
    long long inv_cnt = 0;
    
    while(i<n && j<m){
        
        if(arr1[i]<=arr2[j]){
            arr[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            inv_cnt += n-i;
            arr[k] = arr2[j];
            j++;
            k++;
        }
    }
    
    while(i<n){
        arr[k++] = arr1[i++];
    }
    
    while(j<m){
        arr[k++] = arr2[j++];
    }
    
    return inv_cnt;
}

long long mergeSort(long long l,long long r,long long arr[]){
    long long inversion_cnt = 0;
    
    if(l<r){
        long long mid = (l+r)/2;
        
        inversion_cnt += mergeSort(l,mid,arr);
        inversion_cnt += mergeSort(mid+1,r,arr);
        
        inversion_cnt += merge(l,mid,r,arr);
    }
    
    return inversion_cnt;
}

long long int inversionCount(long long arr[], long long N)
{
    return mergeSort(0,N-1,arr);
} 

void solve(){
    
    long long n;
    cin>>n;
    
    long long arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"INVERSION COUNT IS :"<<inversionCount(arr,n)<<endl;
    
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