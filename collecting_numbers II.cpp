#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
 
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define loop(i,n)for(i=0;i<n;i++)
#define INF 1000000000
 
 
using ll = long long int;
typedef pair<ll,ll> pii;
typedef vector<pii> vii;
 
typedef vector<ll> vi;
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;
 
bool sortsec(const pair<int,int> &a,const pair<int,int> &b)
{
    if(a.second==b.second)return a.first>b.first;
    else return (a.second>b.second);
}
 
 
 
#define eb emplace_back
#define mp make_pair
#define pb push_back
#define MAX 1000000
#define MOD 100000000
#define endl '\n'
ll dx[4]={-1,1,0,0};
ll dy[4]={0,0,1,-1};

 
 /* 
    freopen("problemname.in", "r", stdin);
	freopen("problemname.out", "w", stdout);
*/ 
int main()
{
	    IOS;
	// freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
 ll n,m;cin>>n>>m;
   ll ma[n+1];
   memset(ma,0,sizeof(ma));
   vi v(n);
   ll ans = 1;
   for(ll i=0;i<n;i++)
   {
       cin>>v[i];
       ma[v[i]] = i+1;
       if(v[i]!=1 && !ma[v[i]-1]) ans++;
   }
   //cout<<ans<<endl;
   while(m--){
   ll a,b;cin>>a>>b;
   ll numa = v[a-1];
   ll numb = v[b-1];
   set<pii> s;
   // x<y
   if(numa!=1)s.insert({numa-1,numa});
   if(numa!=n)s.insert({numa,numa+1});
   if(numb!=1)s.insert({numb-1,numb});
   if(numb!=n)s.insert({numb,numb+1});
   for(auto x:s)
   {
       if(ma[x.first]>ma[x.second])ans--;
   }
   v[a-1] = numb;
   v[b-1] = numa;
   ma[numb] = a;
   ma[numa] = b;
   for(auto x:s)
   {
       if(ma[x.first]>ma[x.second])ans++;
   }
   cout<<ans<<endl;
   }
   return 0;
}          
