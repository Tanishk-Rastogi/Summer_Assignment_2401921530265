#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int i = 0;
    int j = 0;
    int k;
    cin >> k;
    int sum = 0;
    double maxi = INT_MIN;
    while(j<n){
        sum+=arr[j];
        if(j-i+1 > k){
            sum -= arr[i];
            i++;
        }
        if(j-i+1 == k){
            maxi = max(maxi, double(sum)/(j-i+1));
        }
        j++;
    }
    cout << maxi;
}
// INPUT - 1,12,-5,-6,50,3
// OUTPUT - 12.75