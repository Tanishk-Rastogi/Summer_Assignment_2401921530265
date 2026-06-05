#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> mat(n, vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> mat[i][j];
        }
    }
    int sum = 0;
    for(int i = 0;i < n; i++){
        for(int j=0;j<n;j++){
            if(i == j || i+j == n-1) sum += mat[i][j];
        }
    }
    cout << sum;
}

// INPUT - [[1,2,3], [4,5,6], [7,8,9]]
// OUTPUT - 25