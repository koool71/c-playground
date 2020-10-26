#include <iostream> 
#include <cmath>

using namespace std;

void solution(int m, int n, int x[], int y[]){
	int count = 0;
	for(int i = 0; i < m; ++i){
		for(int k = 0; k < n; ++k){
			if(pow(x[i], y[k]) > pow(y[k], x[i])){
				count++;
			}
		}
	}
	cout << count << endl;
}

int main(){
	int m = 0;
	int n = 0;

	m = 3;
	n= 2;
	int x[3] = {2, 1, 6};
	int y[2] = {1, 5};
	solution(m, n, x, y);

	int a[3] = {10, 19, 18};
	int b[3] = {11, 15, 9};
	solution(3, 3, a, b);


	return 0;
}