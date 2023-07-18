#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

const int mx = 1e5+123;

bitset<mx+100>vis;
vector<int>prime;
void sieve(int n) {
  n += 100;
  for (int i = 3; i <= n; i += 2)vis[i] = 1;
  int sq = sqrt(n);
  for (int i = 3; i <= sq; i += 2) {
    for (int j = i * i; j <= n; j += (i + i)) {
      vis[j] = 0;
    }
  }
  prime.push_back(2);
  for(int i = 3; i <= n; i += 2){
    if(vis[i]){
        prime.push_back(i);
    }
  }
  return ;
}

vector<int> Divisors(int n){
    vector<int>v;
    int lmt = sqrt(n);
    for(auto p : prime){
        if(p*p > n)break;
        if(n%p == 0){
            v.push_back(p);
            if(n/p != p){
                v.push_back(n/p);
            }
        }
    }
    return v;
}

void solve(int tc){
    int n;
    cin>>n;
    if(n == 1){
        cout<<-1<<endl;
        return;
    }
    vector<int>v = Divisors(n);
    //sort(v.begin(),v.end());
    int x = v.size(), mx = INT_MAX;
    pair<int,int>p;
    for(int i = 0; i < x; i++){
        if(v[i] == n)continue;
        int a = v[i], b = n - v[i];
        int g = __gcd(a,b);
        int l = (a/g)*b;
        if(g+l == n){
            int dif = abs(a-b);
            if(dif < mx){
                p.first = min(a,b);
                p.second = max(a,b);
                mx = dif;
            }
        }
    }
    if(p.first == 0 and p.second == 0){
        cout<<1<<" "<<n-1<<endl;
        return;
    }
    cout<<p.first<<" "<<p.second<<endl;
}



int main(){
    fast;
    sieve(1e5);
    int tc;
    cin>>tc;
    for(int t = 1; t <= tc; t++){
        solve(t);
    }
}