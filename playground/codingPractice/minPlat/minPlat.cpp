#include <iostream>
#include <vector>

using namespace std;

void findPlatform(int arr[], int dept[], int size){
	unsigned int platforms = 0;
	vector<int> waiting;


	for(int i = 0; i < size; ++i){
		waiting.push_back(dept[i]);

		for(unsigned int k = 0; k < waiting.size(); k++){
			if(arr[i] > waiting[k]){
				waiting.erase(waiting.begin() + k);
			}
		}
		if(waiting.size() > platforms){
			platforms = waiting.size();
		}
	}

	cout << platforms << endl;
}

int main(){
	int arr[6] = {900, 940, 950, 1100, 1500, 1800};
	int dept[6] = {910, 1200, 1120, 1130, 1900, 2000};
	int size = 6;

	findPlatform(arr, dept, size);

	return 0;
}