#include <iostream>
using namespace std;
void big_and_small(int );
int main(){
	int num;
	cout<<"enter a number";
	cin>>num;
	big_and_small(num);
	return 0;
}
void  displayTable(int x){
	 int n,p;
	 p = x-1;
	 n = x+1;
	 cout<<"precessor is "<<p;
	 cout<<"successor is "<<n;
	  
}
