//Link: https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/reverse-an-array
//Description: in this question we just have to reverse the array

//naive : what we can do is we can just create a new array and then we can just iterate the list in reverse order and paste it there



//#include <iostream>
//#include <vector>
//using namespace std;
//
//void reverseArray(vector<int> &arr) {
//    vector<int> temp;
//
//    for(int i = arr.size() - 1 ; i >= 0 ; i--){
//        temp.push_back(arr[i]);
//    }
//
//    arr = temp;
//}
//
//int main(){
//    vector<int> arr = {};
//    reverseArray(arr);
//    for(int i : arr){
//        cout << i << " ";
//    }
//}



//better approach : we can just iterate from using two pointer to make it more efficient
#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &arr) {
    for(int i = 0; i < arr.size() /2; i++){
        int temp = arr[i];
        arr[i] = arr[arr.size()-1-i];
        arr[arr.size()-1-i] = temp;
    }
}

int main(){
    vector<int> arr = {};
    reverseArray(arr);
    for(int i : arr){
        cout << i << " ";
    }
}



