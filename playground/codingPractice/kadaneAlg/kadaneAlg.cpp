#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void solution(int t, fstream &input){
	int n = 0;
	int temp= 0;
	double max = -10000000;
	int current = 0;
	vector<int> test;

	for(int i = 0; i < t; ++i){
		input >> n;
		input >> max;
		current = max;
		for(int k = 1; k < n; ++k){
			input >> temp;
			if(temp > max && max < 0){
				max = temp;
				current = temp; 
			}
			else if(temp < 0){
				if(current + temp <= 0){
					current = 0;
				}
				else{
					current += temp;
				}
			}
			else{
				current += temp;
				if(current > max){
					max = current; 
				}
			}
		}

		cout << max << endl;
		current = 0;
		max = -10000000;
		test.clear();
	}
}

int main(){
	fstream input;
	int t = 0;

	input.open("input.txt");
	input >> t; 

	solution(t, input);

	return 0;
}