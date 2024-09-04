#include <iostream>
using namespace std;
 void cal(int a, int b, char op);
 int main(){
 	int x,y;
 	char c;
 	cout<<"enter 1st number,operator and 2nd number";
 	cin>>x>>y>>c;
 	cal(x,y,c);
 	return 0;
 }
 void cal(int a, int b, char op){
 	switch(op){
 		case '+':
 			cout<<a<<"+"<<b<<"="<<a+b;
 			break;
 			case '-':
 			cout<<a<<"-"<<b<<"="<<a-b;
 			break;
 			case '*':
 			cout<<a<<"*"<<b<<"="<<a*b;
 			break;
 			case '/':
 			cout<<a<<"/"<<b<<"="<<a/b;
 			break;
 			default:
 				cout<<"invalid oprator";
	 }
 }