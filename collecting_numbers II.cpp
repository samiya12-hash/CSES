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
   ll ma[n];
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
   // 1st number checking
       // curr - > prev
       if(numa!=1 && ma[numa]<ma[numa-1])
       {
           ans--;
        //    cout<<"ds"<<endl;
       }
       if(numa!=n && ma[numa]>ma[numa+1])
       {
        //    cout<<"ps"<<endl;
           ans--;
       }
       if(numb!=1 && ma[numb]<ma[numb-1])
       {
           if(numa!=numb-1)
           {
            //    cout<<"d"<<endl;
               ans--;
           }
       }
       if(numb!=n && ma[numb]>ma[numb+1])
       {
           if(numa!=numb+1)
           {
            //    cout<<"saw"<<endl;
               ans--;
           }
       }
    //    cout<<ans<<endl;
      ma[numa] = b;
       ma[numb] = a;
       ll cng = v[a-1];
       v[a-1] = v[b-1];
       v[b-1] = cng;
       // ma[4] = 5 , ma[3] = 1
    //    cout<<numa<<" "<<ma[numa]<<endl;
       if(numa!=1 && ma[numa]<ma[numa-1])ans++;
       if(numa!=n && ma[numa]>ma[numa+1])ans++;
       if(numb!=1 && ma[numb]<ma[numb-1] )
       {
           if(numa!=numb-1)
           {
            //    cout<<"d"<<endl;
               ans++;
           }
       }
       if(numb!=n && ma[numb]>ma[numb+1]) {
           if(numa!=numb+1)
           {
            //    cout<<"p"<<endl;
               ans++;
           }
       }
       cout<<ans<<endl;
   }
   return 0;
}          
