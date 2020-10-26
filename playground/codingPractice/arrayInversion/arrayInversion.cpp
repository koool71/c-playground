#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void fill(int n, vector<int> &test, fstream &input){
	int temp = 0;
	for(int i = 0; i < n; ++i){
		input >> temp;
		test.push_back(temp);
	}
}

void solution(int t, fstream &input){
	int n = 0;
	int count = 0;
	vector<int> test;
	for(int i = 0; i < t; ++i){
		input >> n;
		fill(n, test, input);
		for(int i = 0; i < n-1; ++i){
			for(int k = i+1; k < n; ++k){
				if(test[k] < test[i]){
					count++;
				}
			}
		}
		cout << count << endl;
		count = 0;
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