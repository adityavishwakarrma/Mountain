#include <bits/stdc++.h>
using namespace std;

int longestMountain(vector<int>& arr) {
  int n = arr.size();
  
  int largest = 0;

  for(int i =1; i<=n-2; i++){
    
    //check whether a[i] is a peak or not
    if(arr[i]>arr[i-1] && arr[i] <arr[i+1]){
      //work
      int cnt = 1;  // for j = i
      
      int j=i;
      //cnt backwards (left)
      while(j>=1 && arr[j] > arr[j-1]){  //cnt for j-1
        j--;
        cnt++;
      }
      
      //cnt forward (right)
      while(i<=n-2 && arr[i] > arr[i+1]){
        i++;
        cnt++;
      }

      largest = max(largest, cnt);
      
    }
    else{
      i++;
    }
  }
  
  return largest;
}

int main() {
  cout << "Hello World!\n";

  vector<int> arr{5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};
  
  cout << longestMountain(arr);
}