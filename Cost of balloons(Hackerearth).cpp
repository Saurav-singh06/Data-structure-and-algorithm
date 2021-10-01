#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		int p;
		cin>>n>>m>>p;
		int a[p],b[p],ctr1=0,ctr2=0;
		for(int i=0;i<p;i++){
			cin>>a[i]>>b[i];
			ctr1+=a[i];
			ctr2+=b[i];
		}
		int s= (ctr1*n)+(ctr2*m);
		int s1= (ctr1*m)+(ctr2*n);
		cout<<min(s,s1)<<endl;
	}
}
