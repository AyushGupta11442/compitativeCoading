//Link : https://www.geeksforgeeks.org/problems/parenthesis-checker2744/1?page=1&category=Strings&sortBy=submissions
//Description : in this question we have to just check that if there balance in the bracket in the string
//for eg "()" or "{()}" is balance
//Naive approach : we can just iterate to the list from starting and end and if in current index the char doesn't matches then it
//                 we can say that that the given string does  not matches


//#include <iostream>
//
//using namespace std;
//
//bool isParenthesisBalanced(string& s) {
//    int n = s.size();
//    if(n < 2 && (n %2 != 0)){
//        return false;
//    }
//    for (int i = 0 ; i < n/2 ; i++){
//        char a =  s[i];
//        char b = s[n-1-i];
//        if (b == '}') b = '{';
//        if (b == ')') b = '(';
//        if (b == ']') b = '[';
//        if(a != b ){
//
//            return  false;
//        }
//    }
//    return true;
//
//}
//
//int main(){
//    string s = "{([])}";
//    cout << isParenthesisBalanced(s);
//}



//this is wrong cause this will fail at multiple
//better approacg: use stack

#include <iostream>
#include <stack>

using namespace std;
bool ispar(string x)
{
    if(x.size() == 1 ) return false;
    stack<char> stack ;
    for(char b : x){
        if (b == '('){
            stack.push(b);
        }else if( b == '{'){
            stack.push(b);
        }else if(b == '['){
            stack.push(b);
        }else if(b == ')' && !stack.empty() && stack.top() == '('){
            stack.pop();
        }else if(b == '}' &&!stack.empty() && stack.top() == '{'){
            stack.pop();
        }
        else if(b == ']' && !stack.empty() &&stack.top() == '['){
            stack.pop();
        }else{
            return false;
        }
    }
    if (stack.empty()){
        return true;
    }else
    {
        return false;
    }
}

bool isParenthesisBalanced(string& s) {
    stack<char >  stk;

    if (s.size() < 2 || (s.size() % 2  != 0 )){
        return false;
    }

    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] == '{' || s[i] == '[' ||s[i] == '(' ){
            stk.push(s[i]);
        }else{
            if(stk.empty()){
                return false;
            }
            char top = stk.top();

            if((s[i] - '0') -1 == ( top - '0' ) ||(s[i] - '0') -2 == ( top - '0' ) ){
                stk.pop();
            }else{
                return false;
            }
        }
    }
    if(stk.empty()){
        return true;
    }else{
        return false;
    }

}

int main(){
    string s = "{[()()]}";
    cout << isParenthesisBalanced(s);
}



