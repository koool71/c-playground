#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &a1, vector<int> &a2){
	cout << a1[0] << endl;
	cout << a2[0] << endl;
}

int main(){
	vector<int> a1;
	a1.push_back(1);
	a1.push_back(3);
	a1.push_back(5);
	a1.push_back(7);

	vector<int> a2;
	a2.push_back(0);
	a2.push_back(2);
	a2.push_back(6);
	a2.push_back(8);
	a2.push_back(9);

	merge(a1, a2);

	return(0);
}