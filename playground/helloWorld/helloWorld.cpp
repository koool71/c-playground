#include <iostream>

using namespace std;

int factorial(int a){
	if(a<=1){
		return 1;
	}

	return(a * factorial(a-1));
}

int main(){
	cout << "Hello World" << endl;

	cout <<	factorial(1) << endl;
	cout << factorial(5) << endl;
	cout << factorial(3) << endl;

	return 0;
}