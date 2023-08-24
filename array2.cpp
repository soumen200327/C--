#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int size;
	cout<<"Enter array size:";
	cin>>size;
	int arr[size];
	cout<<"Enter array Elemaents:"<<endl;
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	//*** Find the Min value;
//	int min=arr[0];
//	for(int i=0;i<size;i++){
//		if(arr[i]<min){
//			min=arr[i];
//		}
//	}
//	
//   cout<<"MIN:"<<min;
   
   //********* find the Max value;
   
//   int max=arr[0];
//	for(int i=0;i<size;i++){
//		if(arr[i]>max){
//			max=arr[i];
//		}
//	}
//	
//   cout<<"MIN:"<<max;

  //** Find the data have in the array yea not;
//  int x;
//  cout<<"Enter the search element:";
//  cin>>x;
//  cout<<"Index number:"<<endl;
//  for(int i=0;i<size;i++){
//  	if(x==arr[i]){
//  		cout<<i;
//  		
//	  }
//  }

//  //** Revers arrya;
//  for(int i=size-1; i>=0;i--){
//  	cout<<arr[i]<<" ";
//  }

// //** Revers arrya using reveres() funcation;
//  reverse(arr, arr + size);
//  for(int i=0;i<size;i++){
//		cout<<arr[i];
//	}
//   

//** shroting array;
//int a;
//for(int i=0;i<size;i++){
//	for(int j=i;j<size;j++){
//		if(arr[j]<arr[i]){
//		a=arr[i];
//		arr[i]=arr[j];
//		arr[j]=a;
//		}
//	}
//}

//** shroting array sort() function;
 sort(arr, arr + size);

for(int i=0;i<size;i++){
		cout<<arr[i];
	}
	
	
	
}
