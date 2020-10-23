#include <iostream>
#include <vector>

using namespace std;

void solution(int n, vector<int> &test){
	int total = 0;
	int sums_size = 0;
	vector<int> sums;

	for(int i = 0; i < n - 1; i++){
		for(int j = i+1; j < n; j++){
			sums.push_back(test[i] + test[j]);
			sums_size++;
		}
			
	}

	for(int i = 0; i < sums_size; ++i){
		for(int k = 0; k < n; ++k){
			if(sums[i] == test[k]){
				total++;
			}
		}
	}

	cout << total << endl;
}

int main(){

	vector<int> test1;
	test1.push_back(1);
	test1.push_back(5);
	test1.push_back(3);
	test1.push_back(2);

	vector<int> test2;
	test2.push_back(2);
	test2.push_back(3);
	test2.push_back(4);
	

	

	solution(4, test1);
	solution(3, test2);

	return 0;
}