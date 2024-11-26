//Problem Link: https://www.codechef.com/problems/DIWALIDISC
//Description : in this question we have to just print the price of the final price after the discount of B

#include <iostream>

using namespace std;


int main(){
    int a, b;
    cin >> a>> b;
    if(a > b){
        cout << a - b <<endl;
    }
    else{
        cout << 0 << endl;
    }
}