#include <iostream>
#include <cmath>

using namespace std;

/*SUMMARY
The purpose of this program is to find the answer to problem 1.2-1 in the text.
The problem is to find at for which values of n does insertion sort beat merge sort given insertion sort runs in 8n^2 steps and merge sort runs in 64n lg(n) steps.
I will accomplish this by writing a simple program that iterates though values of n (pretending they're quantites of instructions) and compares the output of both functions.
*/

/*REFLECTION
So I made this program thinking that I could just simulate instructions by iterating through n, but there was a flaw in my logic. 
For insertionSort - 8*(1)*(1) = 8. 
For mergeSort     - 64*(1)*ln(1) = 0

So my program was immediately returning "MergeSort is now more efficient." 
In summary - my program breaks down at n = 1 because log(1) = 0, which makes mergeSort always 0 at that point.
To fix this, I start at 2 instead.
*/

double insertionSort(int n){

    return 8*n*n;
    
}

double mergeSort(int n){

    return 64*n*log2(n);

}

int main(){

    int n = 2;

    while(insertionSort(n) < mergeSort(n)){
        cout << n << endl;
        n++;
    }

    cout << "MergeSort is now more efficient" << endl;

    return 0;

}