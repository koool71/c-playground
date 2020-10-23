#include <iostream>
#include <vector>

using namespace std;

void solution(int n, vector<int> &test){
	int first = 0;
	int second = 0;
	int total = 0;

	for(int i = 0; i < n - 1; i++){
		for(int j = i+1; j < n; j++){
			first = test[i];
			second = test[j];
			for(int k = 0; k < n; k++){
				if(k != i && k != j && (first+second == test[k])){
					total++;
				}
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