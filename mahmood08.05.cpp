#include <iostream>
using namespace std;
void prime(int n);
int main(){
	//check prime and composite
	int num;
	cout<<"enter a number";
	cin>>num;
	prime(num);
	return 0;
}
void prime(int n){
	int c,p=1;
	for(c=2;c<n/2;c++)
	if(n%c==0){
		p = 0;
		break;
	}
	if(p==1)
	cout<<n<<" is a prime number";
	else
	cout<<n<<" is not a prime number";
	 
}