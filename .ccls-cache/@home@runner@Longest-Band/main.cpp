#include <bits/stdc++.h>
using namespace std;

int largestBand(vector<int> arr){
  int n = arr.size();
  unordered_set<int> s;
  for(int e : arr){
    s.insert(e);
  }
  int largest = 0;
  
  for(int i=0; i<n; i++){
    int curr = arr[i];
    
    if(s.find(curr-1) == s.end()){
      int cnt = 1;  //cnt for curr
      while(s.find(curr+1) != s.end()){
        cnt++;      //cnt for curr+1
        i++;
      }
      largest = max(largest, cnt);
    }

  }
  
  return largest;
}

int main() {
  cout << "Hello World!\n";
  
	vector<int> arr{3,2,1};
	cout << largestBand(arr)<<endl;

	return 0;
}