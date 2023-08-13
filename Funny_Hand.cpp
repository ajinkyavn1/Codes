#include <bits/stdc++.h>
using namespace std;
int main() {
int n=4;
int total=25003;
// TC = n*log(d)
int ans=-1;
for(int i=0; i<n; i++){
int val=total-5000*(i+1);
if(val==0){
ans=1;
break;
}
if(val>0){
int l=1, r=val/5000;
while(l<=r){
int mid=(l+r)/2;
int temp=mid*(mid+1);
temp/=2;
temp+=5000*mid;
if(temp==val){
ans=mid+1;
break;
}
if(temp>val){
r=mid-1;
}
else{
l=mid+1;
}
}
if(ans!=-1){
break;
}
}
}
cout<<ans<<"\n";
}#include <bits/stdc++.h>
using namespace std;
int main() {
int n=4;
int total=25003;
// TC = n*log(d)
int ans=-1;
for(int i=0; i<n; i++){
int val=total-5000*(i+1);
if(val==0){
ans=1;
break;
}
if(val>0){
int l=1, r=val/5000;
while(l<=r){
int mid=(l+r)/2;
int temp=mid*(mid+1);
temp/=2;
temp+=5000*mid;
if(temp==val){
ans=mid+1;
break;
}
if(temp>val){
r=mid-1;
}
else{
l=mid+1;
}
}
if(ans!=-1){
break;
}
}
}
cout<<ans<<"\n";
}