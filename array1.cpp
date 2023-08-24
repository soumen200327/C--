#include<iostream>
using namespace std;
int in_out_array(){
	int size;
cout<<"Enter Array Size:";
cin>>size;
int array[size];
cout<<"Enter Array Element:"<<endl;
for(int i=0;i<size;i++){
	cin>>array[i];
}
cout<<"Your Array Elements:"<<endl;
for(int i=0;i<size;i++){
	cout<<array[i]<<" ";
}
}
int main(){
in_out_array();

}
