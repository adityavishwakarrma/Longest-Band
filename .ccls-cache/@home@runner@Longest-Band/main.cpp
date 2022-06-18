#include <bits/stdc++.h>
using namespace std;

int largestBand(vector<int> arr){
  int n = arr.size();
  sort(arr.begin(), arr.end());

  int largest = 0;
  int cnt = 1;
  for(int i=1; i<n; i++){
   
    if(arr[i-1]+1  == arr[i]){
      cnt++;   // cnt for i
    } else {   
      largest = max(largest, cnt);
      cnt = 1;   //cnt for i as 1
    }
    
  }

  return largest;
}

int main() {
  cout << "Hello World!\n";
  
	vector<int> arr{1, 9, 3, 0, 18, 5, 2, 4, 10, 7, 12, 6};
	cout << largestBand(arr)<<endl;

	return 0;
}