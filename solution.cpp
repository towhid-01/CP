#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define uniq(a) a.resize(unique(a.begin(), a.end()) - a.begin())
#define PI 3.14159265358979323846264338327951
#define rvrs(a) reverse(a.begin(),a.end())
#define rall(a) a.rbegin(),a.rend()
#define lcm(a,b) (a*(b/gcd(a,b)))
#define vec vector<long long int>
#define all(a) a.begin(),a.end()
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define gcd(a,b) __gcd(a,b)
#define c1 cout<<"-1"<<endl
#define ll long long int
#define ld long double
#define vi vector<string>
#define eb emplace_back
#define mpp map<ll,ll>
#define pb push_back
#define endl '\n'
#define S second
#define F first
#define dbg(args...) do {cerr << #args << " : "; check(args); } while(0)
void check(){cerr << endl;}
template<typename T>void check(T a[],int n){for(int i=0;i<n;++i)cerr<<a[i]<<' ';cerr<<endl;}
template<typename T,typename...hello>void check(T arg,const hello&...rest){cerr<<arg<<' ';check(rest...);}

typedef tree< ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update > ordered_set;

const ll N=1e7+10;
const ll mx = 1e7+10;
const ll INF = 1e9+10;

vec prime,u(N);
bitset<mx> mxx;

void sieve(){
    mxx[0]=mxx[1]=false;
    mxx[2]=true;
    for(ll i=3;i<=N;i+=2){
        mxx[i]=true;
    }

    for(ll i=3;i<=sqrt(N);i+=2){
        if(mxx[i]==true){
            for(ll j=i*i;j<=N;j+=i+i){
                mxx[j]=false;
             }
        }
    }

    prime.pb(2);

    for(ll i=3;i<=N;i+=2){
        if(mxx[i]==true){

            prime.pb(i);
        }
    }
}


/// cout<<*X.find_by_order(1)<<endl; // iterator to the k-th largest element
/// cout<<X.order_of_key(-5)<<endl;  // number of items in a set that are strictly smaller than our item


       // cout.precision(10);
      // cout<<fixed<<sum<<endl;

bool cmp(pair<ll,ll>&p1,pair<ll,ll>&p2){

    return p1.second > p2.second;

}

void mg(vector<int> &v ,int l,int mid,int h){
    vector<int> u;
    int left =l,right=mid+1;
    while(left<=mid && right<=h){
        if(v[left]<=v[right]){
            u.pb(v[left]);
            left++;
        }
        else{
            u.pb(v[right]);
            right++;
        }
    }

    while(left<=mid){
        u.pb(v[left]);
        left++;
    }
    while(right<=h){
        u.pb(v[right]);
        right++;
    }

    for(ll i=l;i<=h;i++){
        v[i]=u[i-l];
    }
}

void ms(vector<int> &v ,int l ,int h){
    if(l==h)return;
    int mid=(l+h)/2;
    ms(v ,l , mid);
    ms(v, mid+1,h);
    mg(v ,l,mid,h);
}

int part(vec &v,ll low, ll high){
            ll piv=v[low];
            ll i=low;
            ll j=high;

            while(i<j){
                while(v[i]<=piv && i<=high-1)i++;
                while(v[j]>piv && j>=low+1)j--;
                if(i<j)swap(v[i],v[j]);
            }
            swap(v[low],v[j]);
            return j;
}


void qs(vec &v ,ll low, ll high){
    if(low<high){
        ll ind=part(v,low,high);
        qs(v,low,ind-1);
        qs(v,ind+1,high);
    }
}


const ll MOD = 1e9 + 7;





int main() {

    fast();
    ll t;
    cin>>t;
    ll tc=1;
    while(t--){
        ll n,m,k,sum=0,sum2=0;
        string s,s2="",s3="";
        ll a,b,c;
        
            
    }

    return 0;
        
}
