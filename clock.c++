#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void TCSOLVE(){
    ll n,k;
    cin >> n >> k;
    map<int,int> m;
    for(int i = 0;i<n;i++){
      ll x;cin >> x;
      m[x]++;
      // v.push_back(x);
    }
    // m.erase(1);
    // for(auto x: m){
    //   cout << x.first << " -- > " << x.second << endl;
    // }
    ll cnt1 = 0;
    for(auto x: m){
      if(cnt1 == k){
        break;
      }
      if(m[x.first] == 1){
        cnt1++;
        m[x.first]--;
        // ll temp = x.first;
        // m.erase(temp);
      }
      else{
        m[x.first]--;
        cnt1++;
      }
    }
    ll cnt2 = 0;
    for(auto x: m){
      if(cnt2 == k){
        break;
      }
      if(m[x.first] == 1){
        cnt2++;
      }
    }
    
    // // for(auto x: m){
    if(cnt1 + cnt2 == n){
      cout << "YES" << endl;
    }
    else{
      cout << "NO" << endl;    
    }
    return;
   
}
int main(){
    ll n;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin >> n;
    ll i = 1;
    while(n--){
        cout << "Case #" << i << ": ";
        TCSOLVE();
        i++;
    }
}