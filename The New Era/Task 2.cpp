#include<iostream>
//2. WAP which illustrates the use of public and private access modifiers.

using namespace std;

class student{
	public:
		int money;
};
int main(){
	student obj;
	obj.money=7000;
	
	cout<<obj.money;
	
	return 0;
}

