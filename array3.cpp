#include<iostream>
using namespace std;
int main(){
//int size;
//	cout<<"Enter array size:";
//	cin>>size;
//	int arr[size];
//	cout<<"Enter array Elemaents:"<<endl;
//	for(int i=0;i<size;i++){
//		cin>>arr[i];
//	}
//	
	// Find the Sceond Max with out short function;
//	int max=arr[0];
//	int sceond_max=INT_MIN;
//	
//	for(int i=0;i<size;i++){
//		if(arr[i]>max){
//			max=arr[i];
//		}
//	}
//	for(int i=0;i<size;i++){
//		if(max!=arr[i]){
//			if(arr[i]>sceond_max)
//				sceond_max=arr[i];
//		
//		}	
//	}
//	cout<<"Mceond Max:"<<sceond_max;
	
	 
// Union and intersection;

int arr1[]={2,3,9,18,5};
int arr2[]={5,9,60,4};
int arr1_size=sizeof(arr1)/sizeof(int);
int arr2_size=sizeof(arr2)/sizeof(int);
cout<<"intersection is:";
for(int i=0;i<arr1_size;i++){

	for(int j=0; j<arr2_size;j++){
		if(arr1[i]==arr2[j]){
			cout<<arr1[i]<<" ";
		}
	}
}
	 
	  
	
	
}
