#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

//This solves the "Subarray with given sum" problem. 
//Source: practice.geeksforgeeks.org/problems/subarray-with-given-sum/0

void solve(int t, fstream &input){
	int n = 0;
	int s = 0;
	int start = 0;
	int end = 0;
	int temp = 0;
	int total = 0;
	vector<int> a;

	for(int i = 0; i < t; ++i){
		input >> n;
		input >> s;

		for(int k = 0; k < n; ++k){
			input >> temp;
			a.push_back(temp);
		}
		
		while(total != s && total != -1){
			if(total < s){
				total += a[end];
				if(end < n){
					end++;
				}
				else{
					cout<< "HERE" << endl;
					total = -1;
				}
			}
			else if(total > s){
				total -= a[start];
				start++;
			}
		}

		if(total == s){
			cout << start+1 << " " << end << endl;
		}
		else{
			cout << -1 << endl;
		}
		end = 0;
		start = 0;
		total = 0;
		a.clear();

	}
}

int main(){
	int t = 0;
	fstream input;

	input.open("input.txt");
	input >> t;
	solve(t, input);

	return 0;
}