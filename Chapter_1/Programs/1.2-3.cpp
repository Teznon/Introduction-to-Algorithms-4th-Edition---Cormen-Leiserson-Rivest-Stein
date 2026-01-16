#include <iostream>
#include <cmath>

using namespace std;

/*SUMMARY
The goal of this program is to solve exercise 1.2-3: What is the smallest value of n such that an algorithm whos 
running time is 100n^2 runs faster than an algorithm whos running time is 2^n on the same machine? 
*/

/*REFLECTION
The user input was certainly unccessary, but wanted it to be a little different than the previous problem.*/

double expressionOne(int n){
    return 100*n*n;
}

double expressionTwo(int n){
    return pow(2, n);
}
int main(){
    int n = 0;
    string e1 = "100*n*n";
    string e2 = "2^n";

    cout << "Enter a starting number: ";
        cin >> n;

    if(expressionOne(n) < expressionTwo(n)){
        cout << "Given this input, " << e1 << " is already less than " << e2 << "." << endl;
        return 0;
    }

    while(expressionOne(n) > expressionTwo(n)){
        n++;
    } 

    cout << "The smallest value n where " << e1 << " < " << e2 << " is: " << n << endl;  

    return 0;
}