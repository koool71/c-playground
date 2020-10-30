#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void fill(int n, fstream &input, int a[]){
	int temp = 0;
	for(int i = 0; i < n; ++i){
		input >> temp;
		a[i] = temp;
	}
}

void solution(int t, fstream &input, int a[]){
	int n = 0;
	bool lead = true;
	vector<int> leads;
	for(int i = 0; i < t; ++i){
		input >> n;
		fill(n, input, a);
		for(int k = 0; k < n - 1; ++k){
			for(int j = k + 1; j < n; ++j){
				if(a[j] > a[k]){
					lead = false;
					j = n;
				}
			}
			if(lead){
				leads.push_back(a[k]);
			}
			lead = true;
		}
		leads.push_back(a[n-1]);
		for(unsigned int k = 0; k < leads.size(); ++k){
			cout << leads[k] << " ";
		}
		cout << endl;
		leads.clear();
	}
}

int main(){
	fstream input;
	input.open("input.txt");
	int t = 0;
	input >> t;
	int a[6] = {16, 17, 4, 3, 5, 2};

	solution(t, input, a);
	return 0;
}