// Input: s = "hello world 5 x 5"
// Output: false
// Explanation: The numbers in s are: 5, 5. They are not strictly increasing.


#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool areNumbersAscending(string s) {
    int n = s.size();
    vector<long long > arr ;
    for(int i = 0 ; i < n ; i++){
        if(s[i] <= '9' &&  s[i] >= '0'){
            long long  num = 0;
            while(s[i] <= '9' &&  s[i] >= '0'){
                num = ((num * 10) + (s[i] - '0'));
                i++;
            }
            arr.push_back(num);
        }
    } 
    for(int a : arr){
        cout << a << " ";
    } 
    
    for(int i = 1 ; i < arr.size() ; i++){
        if(arr[i] <= arr[i-1]){
            return false;
        }
        
    }
    return true;
}


int main(){

}