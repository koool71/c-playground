#include <iostream>
#include <fstream>


using namespace std;

void fill(fstream &input, int n, int a[]){
	int temp = 0;
	for(int i = 0; i < n; ++i){
		input >> temp;
		a[i] = temp;
	}
}

void solution(int t, fstream &input, int a[]){
	int n = 0;
	int a_count = 0;
	int b_count = 0;
	int index = -2;
	for(int i = 0; i < t; ++i){
		input >> n;
		fill(input, n, a);
		for(int k = 0; k < n; ++k){
			for(int j = 0; j < n; ++j){
				if(j < k){
					a_count += a[j];
				}
				else if(j > k){
					b_count += a[j];
				}
			}
			if(a_count == b_count){
				index = k; 
			}
			a_count = 0;
			b_count = 0;
		}
		cout << index + 1 << endl;
		index = -2;
	}

}

int main(){
	int t = 0;
	int a[5] = {1, 3, 5, 2, 2};
	fstream input;
	input.open("input.txt");
	input >> t;

	solution(t, input, a);

	return 0;
}