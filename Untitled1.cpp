#include <iostream>

using namespace std;

int main(){
	int x;
	int div=0;
	int mod;
	cout<<"Enter your number to check";
	cin>>x;
	for(int i=1; i<x; i++){
		mod = x%i;
		if(mod==0){
			div = div+=i;
		}
	}
	if (div==x){
		cout<<"The number is perfect";
	}
	else{
		cout<<"The number is not perfect";
	}
	return 0;
}