#include <iostream>
using namespace std;
void area(float s){
	float a;
	a = s* s;
	cout<<"area = "<<a<<endl;
	
}
void perimeter(float s ){
	float p = s* 4;
	cout<<"perimeter = "<<p<<endl;
}
int main(){
	float side;
	cout<<"enter the length of side";
	cin>>side;
	area(side);
	perimeter(side);
	
}