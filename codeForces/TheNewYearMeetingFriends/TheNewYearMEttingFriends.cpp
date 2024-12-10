//LINK: https://codeforces.com/problemset/problem/723/A
//Description: in this question we have to just to take input for 



#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr(3);
   for(int i = 0; i < 3 ; i++){
       cin >> arr[i];
   }
   sort(arr.begin() , arr.end());

   cout << arr[2] - arr[0];
}