#include <iostream>
#include <vector>

using namespace std;

void swap(int a_index, int b_index, int a[], int b[]){
	int temp = 0;

	temp = a[a_index];
	a[a_index] = b[b_index];
	b[b_index] = temp;
}

void merge(int n, int m, int a[], int b[]){
	int min = 0;
	int m_index = 0;
	bool first = false;
	bool swap = false;
	
	min = a[0];

	for(int i = 0; i < n+m; ++i){
		for(int k = i; k < n+m; ++k){
			if(k < n){
				if(a[k] < min){
					min = b[k];
					m_index = k;
					first = true;
				}
			}
			else{
				if(b[k-n] < min){
					min = b[k-n];
					m_index = k-n;
					first = false;
				}
			}
		}
		if(i < n && swap){
			if(first){
				a[m_index] = a[i];
				a[i] = min;
			}
			else{
				b[m_index] = a[i];
				a[i] = min;
			}
		}
		else{
			b[m_index] = b[i-n];
			b[i-n] = min;
		}

		min = 100000000;
	}

	for(int i = 0; i < n; ++i){
		cout << a[i] << " ";

	}
	for(int i = 0; i < m; ++i){
		cout << b[i] << " ";
	}

	cout << endl;
}

int main(){
	int m = 5;
	int n = 4;
	int a[4] = {1 ,3 ,5 ,7}; 
	int b[5] = {0, 2, 6, 8, 9};

	int c[2] = {10, 12}; 
	int d[3] = {5, 18, 20};

	

	merge(n, m, a, b);
	merge(2, 3, c, d);

	return(0);
}