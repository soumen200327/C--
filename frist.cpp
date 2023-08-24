#include<iostream>
using namespace std;
int main(){
	int a,b,c,avg,ans;
	for(int i=1;i<=3;i++){
		int temp;
		cin>>temp;
		a+=temp;
		cin>>temp;
		b+=temp;
		cin>>temp;
		c+=temp;
	}
	avg=a/3;
	
	if(avg<b/3){
		avg=b/3;
	}
	if(avg<c/3){
		avg=c/3;
	}
	if(avg>70){
	
   if(avg==a/3){
   	cout<<"lab A"<<endl;
   	cout<<"\t lavel 1"<<endl;
   	cout<<"\t lavel 1"<<endl;
   	cout<<"\t lavel 1"<<endl;
   }
   if(avg==b/3){
   	cout<<"lab B"<<endl;
   	cout<<"\t lavel 1"<<endl;
   	cout<<"\t lavel 1"<<endl;
   	cout<<"\t lavel 1"<<endl;
   }
   if(avg==c/3){
   	cout<<"lab C"<<endl;
   	cout<<"\t lavel 1"<<endl;
   	cout<<"\t lavel 1"<<endl;
   	cout<<"\t lavel 1"<<endl;
   }
}else{
	cout<<"Unfite";
}
}
