//problem Link:   https://www.codechef.com/problems/AICOM
//Discription: This is simple code in which we just have to check that the input num is
//smaller than or equal to 60 .If it is then we just have to print "YES" else "No"



#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    cout << ((n <= 60)? "YES" : "NO");
}