#include <iostream>
using namespace std;

int OR(vector<int>& arr) {
	int n = arr.size();
	int res = 0;
	for (int i = 0; i < n; i++) {
		int curr = 0;
		for (int j = i; j < n; j++) {
			curr |= arr[j];
			res |= curr;
		}
	}
	return res;
}

int main() {
	vector<int> arr1 = {1, 4, 6};
	cout << OR(arr1) << endl;

	vector<int> arr2 = {10, 100, 1000};
	cout << OR(arr2) << endl;

	return 0;
}
