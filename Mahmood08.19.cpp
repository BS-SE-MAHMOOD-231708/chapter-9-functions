#include <iostream>
using namespace std;
float circlearea(float r){
	float a;
	a= 3.14 * r *r;
	return a;
}
int main(){
	float radius,area;
	cout<<"enter radius";
	cin>>radius;
	area = circlearea(radius);
	cout<<"the area of circle is "<<area;
	
}