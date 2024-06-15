// हरे कृष्ण हरे कृष्ण, कृष्ण कृष्ण हरे हरे ||

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
vector<int> twoSum(int n, vector<int> &arr, int target) {
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int moreNeeded = target - num;
        if (mpp.find(moreNeeded) != mpp.end()) {
            return {mpp[moreNeeded], i};
        }
        mpp[num] = i;
    }
    return { -1, -1};
}
void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int target;
    cin>>target;
    vector<int> ans = twoSum(n, v, target);
    cout << "Target is present at : [" << ans[0] << ", "
         << ans[1] << "]" << endl;
    
}
signed main(){
//int main(){
    fast_io;
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //#endif
    int t=1; cin>>t;
    while(t--){
    solve();
    }
    return 0;
}

// हरे राम हरे राम, राम राम हरे हरे ||