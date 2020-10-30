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
	int zero = 0;
	int one = 0;
	int two = 0;
	for(int i = 0; i < t; ++i){
		input >> n;
		fill(a, input, n);
		for(int k = 0; k < n; ++k){
			if(a[k] < 1){
				zero++;
			}
			else if(a[k] < 2 && a[k] > 0){
				one++;
			}
			else if(a[k] > 1){
				two++;
			}
		}
		for(int k = 0; k < n; ++k){
			if(zero > 0){
				a[k] = 0;
				zero--;
			}
			else if(one > 0){
				a[k] = 1;
				one--;
			}
			else if(two > 0){
				a[k] = 2;
				two--;
			}
			cout << a[k] << " ";
		}
		cout << endl;
		

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