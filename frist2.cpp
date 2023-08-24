#include<iostream>
using namespace std;
int main(){
	int num;
	cin>>num;
	if(num>7001){
		cout<<"masting overlode";
	}else if(num>4001&&num<=7000){
		cout<<"45 Minute";
	}else if(num>2001&&num<=4000){
		cout<<"35 Minute";
	}else if(num>0&&num<=2000){
		cout<<"25 Minute";
	}else{
		cout<<"0 Minute";
	}
}
