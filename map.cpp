#include<iostream>
#include<map>

using namespace std;
int main(){
	
	map<int,string> customer;
	customer[100]="Soumen";
 	customer[200]="Ankur";
	customer[300]="Vishal";
	customer[400]="Arnob";
	customer[500]="suhita";
	customer.insert(pair<int,string>{600,"Ishika"});
	customer.erase(500);
	customer.clear();
//	map<int,string> student={ {100,"Suman"},{101,"Kakuli"},{102,"Poulami"},{103,"Utjal"},{104,"Anik"}};
//	cout<<customer[100];
  map<int,string>::iterator p=customer.begin();
  while(p!=customer.end()){
  	cout<<p->second<<endl;
  	p++;
  }
//  cout<<customer.find(100)<<endl;
  cout<<"Map size :"<<customer.size()<<endl;;
  cout<<"Empty or not  0 to full 1 empty:"<<customer.empty();
	

}
//// Basic Opration:-
//insert()	adds an element (key-value pair) to the map
//erase()	removes an element or range of elements from the map
//clear()	removes all the elements from the map
//find()	searches the map for the given key
//size()	returns the number of elements in the map
//empty()	returns true if the map is empty
