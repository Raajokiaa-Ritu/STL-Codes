/*
_______________________________________________________________________________________  
|       |+|     |++-++|      ^     |++-++\ |+|    |+| |+| |+|    |+| |++---++|        |   
|       |+|     |+|         /^\    |+| |+| |+|\   |+| |+| |+|\   |+| |+|              |   
|       |+|     |+|____    /+ +\   |+|/+/  |+| \  |+| |+| |+| \  |+| |+| _____        |    
|       |+|     |++-++|   /+/_\+\  |+|-+\  |+|  \ |+| |+| |+|  \ |+| |+| |+++|        |   
|       |+|____ |+|____  /+/   \+\ |+| \+\ |+|   \|+| |+| |+|   \|+| |+|___|+|        |   
|~ ~ ~  |++--++||++--++|/+/     \+\|+|  \+\|+|    |+| |+| |+|    |+| |++---++|  ~ ~ ~ |   
|_____________________________________________________________________________________|   

*/
#include<bits/stdc++.h>
using namespace std;
#define   bf            ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define   ll            long long
#define   pb            push_back
#define   pp            pop_back
#define   pi            2*acos(0.0)
#define   pr            10
#define   mxx           100000 // 10^6
#define   mdx           1000000007
#define   s             second
#define   f             first
#define   space         " "
#define   pii           pair<int,int>
///-------input-output----------//
#define   scan(a)        scanf("%d",&a);
#define   scan2(a,b)     scanf("%d%d",&a,&b);
#define   result(a)      cout<<a<<endl;
#define   sz(a)          a.size()
///-------0-based print--------//
#define   pf(x,y,a)     for(i=x;i<=y;i++)cout<<a[i]<<' ';
#define   forr(a,x)     for(int i=a;i<=x;i++)//1-based
#define   input(n,a)    int a[n];for(int i=0;i<n;i++)cin>>a[i];
#define   print(n,a)    for(i=0;i<n;i++)cout<<a[i]<<' ';
#define   prefx(n,a)    for(i=1;i<n;i++)a[i]=a[i-1]+a[i];
#define   printt(a)     for(auto it:a)cout<<it<<' ';
#define   printmap(a)   for(auto i:a)cout<<i.f<<space<<i.s<<endl;
///----sort & reverse ----///
#define   sortt(v)      sort(v.begin(),v.end());
#define   revr(a)       reverse(a.begin(),a.end());
#define   srt(n,a)      sort(a,a+n);
#define   rev(n,a)      reverse(a,a+n);
#define   gcd(a,b)      __gcd(a,b)
#define   lcm(a,b)      a*(b/__gcd(a,b))

#define test_case     int t;cin>>t;while(t--)

#define   yes           cout<<"YES\n";
#define   no            cout<<"NO\n";

#define   mxe(a)       *max_element(a.begin(),a.end());
#define   mne(a)       *min_element(a.begin(),a.end());
///---change case---//
bool compare(string &s1,string &s2){return s1.size() < s2.size();}
string lower(string s){transform(s.begin(),s.end(),s.begin(),::tolower);return s;}
string upper(string s){transform(s.begin(),s.end(),s.begin(),::toupper);return s;}

map<int,int>mp;
set<int>myset;
vector<int>v,v1,v2;

int n,m,i,j,k,h,t,x=0,y=0,z=0,d=0;
int ans=0,sum=0,cnt=0,p=0,mx=0,mn=0;
int a,b,l,r;
string s,st,str;


int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif


	map<int,int>mp;
	cin>>n; 
	forr(1,n)
	{
		int x;cin>>x; mp[x]++;
	}

	int mx = -1;
	for(auto it : mp)
	{
		mx = max(mx, it.second);
	}
	cout<<mx<<endl;

}