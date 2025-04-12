#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool issorted (vector<int> arr){
    int n = arr.size();

    for(int i = 1 ; i < n ; i++){
        if(arr[i] < arr[i-1]){
            return false;
        }
    }
    return true;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int n , k;
        cin >> n>> k;
        vector<int> arr(n);

        for(int i = 0 ; i < n ;i++){
            cin >> arr[i];
        }

        if(k == 1 && !issorted(arr)){
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl; 
        }
    }

}