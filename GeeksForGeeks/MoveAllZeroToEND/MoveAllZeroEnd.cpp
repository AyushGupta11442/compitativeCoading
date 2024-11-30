//Link:https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/move-all-zeroes-to-end-of-array0751
//Description : in this question we just have to push all zeros to the end of the array


//naive approach : we can create the other vector to store the just number while iterating the original list
//                 after iterating all the list i can add the zeros to the last to make it equal to the original list


//#include <iostream>
//#include <vector>
//
//using namespace std ;
//
//void pushZerosToEnd(vector<int>& arr) {
//    vector<int> temp;
//    for(int i : arr) {
//        if (i != 0) {
//            temp.push_back(i);
//        }
//
//    }
//    while(temp.size() < arr.size()){
//        temp.push_back(0);
//    }
//    arr =temp;
//
//}
//int main(){
//    vector<int> arr = {1, 2, 0, 4, 3, 0, 5, 0};
//    pushZerosToEnd(arr);
//
//    for(int i : arr){
//        cout << i << " " ;
//    }
//
//
//}


//better approach : above approach will take lot of space cause we have to create another vector
//                  we can do one this we can just use two pointer approach to solve this problem
//                  what we can do is just iterate form front and if we found any 0 then we can iterate form the last and find the nonzero number and swap them



#include <iostream>
#include <vector>

using namespace std ;

void pushZerosToEnd(vector<int>& arr) {
   int sPoint = 0;
   int lPoint  ;
   while(sPoint != arr.size() -1){
       if(arr[sPoint] != 0){
           sPoint++;
       }else{
          while()
       }
   }


}
int main(){
    vector<int> arr = {1, 2, 0, 4, 3, 0, 5, 0};
    pushZerosToEnd(arr);

    for(int i : arr){
        cout << i << " " ;
    }


}

