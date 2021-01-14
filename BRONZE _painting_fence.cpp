#include<bits/stdc++.h>
using namespace std;
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
 
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define loop(i,n)for(i=0;i<n;i++)
#define INF 10000000000
 
using ll = long long int;
typedef pair<ll,ll> pii;
typedef vector<pii> vii;
typedef long double ld;
typedef vector<ll> vi;
//typedef tree<int,null_type,less<int>,rb_tree_tag,
   //     tree_order_statistics_node_update> indexed_set;
 
bool sortsec(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
    if(a.second<b.second)return a.first>b.first;
    else return (a.second>b.second);
}
 
 
 
#define eb emplace_back
#define mp make_pair
#define pb push_back
#define MAX 1000000
#define MAX2 1000000005
#define MOD 998244353
#define endl '\n'
int main()
{
  freopen("paint.in","r",stdin);
  freopen("paint.out","w",stdout);
  ll c = 0;
  ll n,m,x,y;cin>>n>>m>>x>>y;
  set <ll> s;
  for(ll i=n;i<m;i++)s.insert(i);
  for(ll j=x;j<y;j++)s.insert(j);
  cout<<s.size()<<endl;              
      return 0;
}