#include <iostream>
#include <fstream>

using namespace std;

void fill(int a[], fstream &input, int n){
	int temp = 0;
	for(int i = 0; i < n; ++i){
		input >> temp;
		a[i] = temp;
	}
}

void solution(fstream &input, int t, int a[]){
	int n = 0;
	for(int i = 0; i < t; ++i){
		input >> n;
		fill(a, input, n);
		
	}
}

int main(){
	int t = 0;
	fstream input;
	input.open("input.txt");
	input >> t;

	int a[5] = {0, 2, 1, 2, 0};
	solution(input, t, a);


	return 0;
}