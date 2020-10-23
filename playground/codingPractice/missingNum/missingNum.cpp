#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void solution(int t, fstream &input){
	vector<int> test;
	int n = 0;
	int temp = 0;

	for(int i = 0; i < t; ++i){
		input >> n;
		for(int k = 0; k < n - 1; ++k){
			input >> temp; 
			test.push_back(temp);
		}

		for(int k = 0; k < n-2; ++k){
			if(test[k+1] - test[k] > 1){
				cout << test[k] + 1 << endl;
			}
		}
		test.clear();
	}
}

int main(){
	int t = 0;
	fstream input;

	input.open("input.txt");
	input >> t;
	solution(t, input);



	return 0;
}