//Link: https://www.codechef.com/problems/NUGGET
//Description: its a cake walk question in which it is given that we have given X nugget and y start piece
//and cost of X and Y is also given we have to just calculate the total amount of money he will make after selling X and Y


#include <iostream>

using namespace std;


int main(){
    int x , y;
    cin >> x >> y;

    cout << (x * 5000) + (y * 9800);
}