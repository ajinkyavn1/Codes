#include<bits/stdc++.h>
using namespace std;
int main() {

	int x,y;
	cin>>x>>y;

	int re=1,count=0;
	while(re<y){
		count++;
		re--;
		re+=x;
	}
	cout<<count<<"\n";
	return 0;
}