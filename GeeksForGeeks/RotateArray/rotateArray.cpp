//Link:https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/rotate-array-by-n-elements-1587115621
//Description: the question is simple it just says that it is you had given and array and number what you have to do is just you
//             have to rotate the array form the given index


//edge case: 1) if the

//naive: what i can do is create another array and just iterate the given array from the given number and after that from starting to that number


#include<iostream>
#include <vector>

using namespace std;
void rotateArr(vector<int>& arr, int d) {
    vector<int> temp;
    int n = arr.size();
    if(d > n ) d = d % n;
    for(int i = d ; i < n ; i++){
        temp.push_back(arr[i]);
    }

    for(int i = 0 ; i < n ; i++){
        temp.push_back(arr[i]);
    }

    arr=temp;
}
int main(){
    vector<int> arr= {116, 759, 105, 239, 334, 861, 291, 223, 425, 255, 312, 255, 818, 280, 796, 261, 796, 609, 934, 202, 978, 858, 982, 772, 878, 718, 918, 331, 501, 683, 107, 372, 607 ,989, 300, 287, 878, 153, 209, 538, 291, 833, 133, 846, 845, 29, 856, 166, 864, 956, 895, 526, 383, 349, 550, 527, 142, 638, 529, 742, 380, 197, 439, 833, 713, 126, 479, 112, 582, 207, 308, 69, 14, 495, 890, 605, 91, 773, 667, 720, 175, 497, 62, 369, 590, 454, 551, 955, 472, 205, 623, 24, 761, 944, 936, 605, 468, 888, 922, 168, 184, 691, 85, 991, 509, 388, 222, 693, 315, 742, 151, 348, 941, 14, 917, 10, 570, 669, 568, 198, 325, 268, 510, 808, 502, 600, 450, 990, 100, 369, 189, 770, 728, 964, 700, 10, 539, 429, 33, 105, 156, 719, 901, 58, 667, 91, 762, 636, 484, 64, 970, 239, 841, 550, 297, 843, 142, 366, 718, 820, 320, 313, 701, 229, 96, 890, 935, 162, 500, 595, 726, 326, 49, 373, 730, 896, 31, 888, 987, 747, 920, 615, 670, 754, 257, 147, 984, 36, 975, 386, 171, 348, 211, 214, 398, 228, 16, 821, 733, 165, 202, 89, 399, 945, 899, 677, 823, 816, 493, 958, 867, 591, 82, 265, 668, 905, 420, 755, 76, 600, 81, 430,};
    rotateArr(arr , 956);
    for(int i : arr){
        cout << i << " ";
    }
}


//better approach: 