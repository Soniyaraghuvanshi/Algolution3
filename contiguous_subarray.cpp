#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void maxOfSubarrays(int arr, int K) {
    int n = arr.size();
   
    for (int i = 0; i <= n - K; i++) {
        int maxElement = INT_MIN;
        
        for (int j = i; j < i + K; j++) {
            maxElement = max(maxElement, arr[j]);
        }
        
        cout << maxElement << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 1, 4, 5};
    int K = 3;
    maxOfSubarrays(arr, K);
    
    return 0;
}
