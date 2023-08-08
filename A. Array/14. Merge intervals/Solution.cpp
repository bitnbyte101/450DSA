/*-------- Bit-N-Byte ----------*/
 
#include<bits/stdc++.h>
using namespace std;
 
vector<vector<int>> merge(vector<vector<int>>& intervals) {
    
    sort(intervals.begin(),intervals.end());
    int n = intervals.size();
    int i = 0;
    vector<vector<int>>mergedIntervals;
    while(i<n){
        int start = intervals[i][0];
        int end = intervals[i][1];
        i++;
        
        while(i<n && end>=intervals[i][0]){
            end=  max(end,intervals[i][1]);
            i++;
        }
        
        mergedIntervals.push_back({start,end});
        
    }
    
    return mergedIntervals;
        
}
 
void solve(){
    int n;
    cin>>n;
    
    vector<vector<int>>intervals(n,vector<int>(2));
    
    //input intervals
    
    for(int i=0;i<n;i++){
        cin>>intervals[i][0]>>intervals[i][1];
    }
    
    vector<vector<int>>mergedIntervals = merge(intervals);
    
    //ouput
    
    for(int i=0;i<mergedIntervals.size();i++){
        cout<<mergedIntervals[i][0]<<" "<<mergedIntervals[i][1]<<endl;
    }
    cout<<endl;
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