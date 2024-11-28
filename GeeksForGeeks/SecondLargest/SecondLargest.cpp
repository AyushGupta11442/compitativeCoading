// Link: https://www.geeksforgeeks.org/problems/second-largest3735/1
//Description: in this question we have to just find the second largest element from the givne array
//naive approach: i am thinking to just sort it in ascending order and second last element  would be the second largest element;



//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int getSecondLargest(vector<int> &arr) {
//    int n = arr.size();
//
//    if(n >= 2){
//        sort(arr.begin() , arr.end());
//        return arr[n-2];
//    }else {
//        return -1;
//    }
//}
//
//int main(){
//    vector<int> arr = {12, 35, 1, 10, 34, 1};
//    int ans = getSecondLargest(arr);
//    cout << ans;
//
//}


//Problem: the problem with above code is that if there are more than one type then it will this meathod will not work
//for ex {5, 5 } there is no second largest largest element
//so to deal with that we can just check form reverse of array linearly for that element


//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int getSecondLargest(vector<int> &arr) {
//    int n = arr.size();
//
//    if(n >= 2){
//        sort(arr.begin() , arr.end());
//        int lElement = arr[n-1];
//        for(int  i = n-2  ; i >= 0 ; i--){
//            if(lElement != arr[i]){
//                return arr[i];
//            }else if(i == 0 ){
//                return -1;
//            }
//
//        }
//    }else {
//        return -1;
//    }
//}

//int main(){
//    vector<int> arr = {10, 10, 10};
//    int ans = getSecondLargest(arr);
//    cout << ans;
//
//}



//Problem: this too have some problems that is the time complexity. by doing so we have the complexity of log(nlogn)
//         but we can so it in log(n) complexity by just keeping track of largest and second largest element in array;

#include <iostream>
#include <vector>

using namespace std;

int getSecondLargest(vector<int> &arr) {
    int n = arr.size();

    if(n <2){
        return -1;
    }

    int lElemt = arr[0];
    int sElemt = INT_MIN ;

    for(int i = 0 ; i < n ; i++){
        if(arr[i] > lElemt){
            sElemt = lElemt;
            lElemt = arr[i];
        }else if(arr[i] > sElemt && arr[i] != lElemt){
            sElemt = arr[i];
        }
    }

    if(sElemt == INT_MIN){
        return -1;
    }else{
        return sElemt;
    }

}

int main(){
    vector<int> arr = {10, 5, 10};
    int ans = getSecondLargest(arr);
    cout << ans;

}
