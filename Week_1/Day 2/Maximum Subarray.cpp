#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxsubarr(vector<int>nums){
  int sum =  0;
  int maxi = INT_MIN;
  for(int i=0;i<nums.size();i++){
    sum += nums[i];
    maxi = max(sum, maxi);
    if(sum < 0) sum = 0;
  }
  return maxi;
}

int main(){
  cout << maxsubarr({-2,1,-3,4,-1,2,1,-5,4});
}

// output: 6