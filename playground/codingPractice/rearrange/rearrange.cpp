#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

//Fill test array with the elements for each test case
void fill(int n, int test[], fstream &input){
	int temp = 0;
	for(int i = 0; i < n; ++i){
		input >> temp;
		test[i] = temp;
	}
	return;
}

// Inserts "next max" number at the desired index and moves all elements starting at the index to the right by 1
void insert(int index, int n, int test[]){
	int max = 0;
	max = test[n-1];
	for(int i = n - 1; i >= index; --i){
		if(i == index){
			test[index] = max;
		}
		else{
			test[i] = test[i - 1];
		}
	}
}

void solution(int t, fstream &input){
	int n = 0;
	int test[100];
	
	for(int i = 0; i < t; ++i){
		input >> n;
		fill(n, test, input);

		for(int k = 0; k < n; k=k+2){
			insert(k, n, test);
		}
		
		for(int k = 0; k < n; ++k){
			cout << test[k] << " ";
		}
		cout << endl;

	}
	return;
}

int main(){
	int t = 0;
	fstream input;
	input.open("input.txt");
	input >> t;
	solution(t, input);
	return 0;
}