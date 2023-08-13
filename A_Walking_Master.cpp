#include <bits/stdc++.h>
#include <omp.h>
using namespace std;

void sum(int *arr,int n){
	int sum=0;
		#pragma parallel for reduction(+:sum)
	for(auto i=0;i<n;i++){
		sum+=arr[i];
	}

	cout<<sum;
}
void avrage(int *arr,int n){
	int sum=0;
	double start = omp_get_wtime();
		#pragma parallel for reduction(+:sum)

	for(auto i=0;i<n;i++){
		sum+=arr[i];
	}

	cout<<sum/n;
}
void minn(int *arr,int n){
	int mi=INT_MAX;
	#pragma parallel for reduction(min:mi)

	for(auto i=0;i<n;i++){
		mi=min(mi,arr[i]);
	}

	cout<<mi;
}
void maxx(int *arr,int n){
	int ma=0;
	#pragma parallel for reduction(max:ma)

	for(auto i=0;i<n;i++){
		ma=max(ma,arr[i]);
	}

	cout<<ma;
}
int main(){
	int n=5;
	int arr[n]={9,6,5,3,1};

	sum(arr,n);
	cout<<"\n";
	avrage(arr,n);
	cout<<"\n";
	minn(arr,n);
	cout<<"\n";
	maxx(arr,n);
}