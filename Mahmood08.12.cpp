#include <iostream>
using namespace std;
  void swap(int &x,int &y);
  int main(){
  	int a ,b;
  	cout<<"enter first integer\n";
  	cin>>a;
  	cout<<"enter 2nd integer\n";
  	cin>>b;
  	cout<<"the values before swaping are"<<a<<"and"<<b<<endl;
  	swap(a,b);
  	cout<<"the values after swaping are"<<a<<"and"<<b;
}
  	 void swap(int &x,int &y){
  	 	int t;
  	 	t=x;
  	 	x=y;
  	 	y=t;
  	 	
	   }
  	
  