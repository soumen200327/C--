#include<iostream>
using namespace std;
int rev_num(int n){
	int rev=0,a=0;
	
	while(n!=0){
		a=n%10;
		rev=rev*10+a;
		n/=10;
		
	}
	return rev;
}
int fac_num(int n){
	int fac=1;
//	for(int i=1;i<=n;i++){
//		fac*=i;
//	}
while(n!=0){
	fac*=n;
	n--;
}
	return fac;
}

int sum_digit(int n){
	int sum,a;
	while(n!=0){
		a=n%10;
		sum+=a;
		n/=10;
	}
	return sum;
	
}
int prime_num(int num){
	int n=num,i;

	for(i=2;i<=num;i++){
		if(num%i==0){
			break;
		}
			 
	}
	
	if(n==i){
		cout<<"This is Prime Number";
	}else{
		cout<<"This is not Prime Number";
	}
	
}
int main(){
	
//	int num;
//	cin>>num;
//	cout<<"Revers Number:"<<rev_num(num)<<endl;
//	if(num==rev_num(num)){
//		cout<<"This is palidrom Number."<<endl;
//	}else{
//	  cout<<"This is Not palidrom Number.";	
//	}
//    int num;
//	cout<<"Enter the number:";
//	cin>>num;
//	cout<<"Factorial is:"<<fac_num(num);

//int num;
//cout<<"Enter the number:";
//cin>>num;
//cout<<"Sum of digit all numbe:"<<sum_digit(num);
	
 int num;
 cout<<"Enter the number:";
 cin>>num;
 prime_num(num);
	
}
