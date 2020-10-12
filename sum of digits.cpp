#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pf push_front
#define mp make_pair
#define F first
#define S second
#define mod 1000000007
#define vl vector<ll>
#define vi vector<int>
#define pi pair<int,int>
#define pl pair<ll,ll>
#define vpl vector<pl>
#define vpi vector<pi>
#define ml map<ll,ll>
#define mi map<int,int>
#define m(a,b) map<a,b>
#define YesNo(f) if(f){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;continue;}
#define setval(a,val) memset(a,val,sizeof(a)) 
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
int getSum(int n){  
    int sum=0; 
    while(n!=0){ 
     sum=sum+n%10; 
     n=n/10; 
    }  
 	return sum; 
 } 
int main()
{
	fastIO;
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	int t=1;
	// cin>>t;
	while(t--){
		int n;
		cin>>n;
		int sumofdigits=getSum(n);
		cout<<"Sum of digits: "<<sumofdigits<<endl;
	}

return 0;
}