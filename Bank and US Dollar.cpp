#include<bits/stdc++.h>
using namespace std;
int main(){
int x;
float y,m;
cin>>x>>y;
if(x%5==0){
    m=y-x-0.5;

	if(m>=0){
   		 cout<<m;
	}
	else{
   	 cout<<y;
	}
}
else{
    cout<<y;
}
return 0;
}
