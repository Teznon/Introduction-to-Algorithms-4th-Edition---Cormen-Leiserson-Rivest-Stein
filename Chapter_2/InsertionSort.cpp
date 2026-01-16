#include <iostream>

using namespace std;

void printArray(int arr[], int n);

void insertionSort(int arr[], int n){

    for(int i = 1; i < n; i++){
        int key = arr[i];               //key starts at the second element of the array
        int j = i - 1;                  //j starts at the element before key

        while(j >= 0 && arr[j] > key){  //while j is not less than 0 and the element at j is greater than key
            arr[j+1] = arr[j];          //shift element at j to the right
            j--;                        //decrement j
        }
        arr[j+1] = key;                 //place key at its correct position
    }

    cout << "Sorted array: " << endl;
    printArray(arr, n);

}

void printArray(int arr[], int n){
    int elements = n;

    for(int i = 0; i < elements; i++){
        cout << " [ " << arr[i] << " ] ";

        if(i % 10 == 0 && i != 0)
            cout << "\n";   
    }

}


int main(){

    srand(time(NULL));

    int elements;

    cout << "How many elements would you like to sort? : " << endl;
    cin >> elements;

    int array[elements];

    //fill each index with random integers
    for(int i = 0; i < elements; i++){
        array[i] = rand() % 100000;
    }

    /*cout << "Original array: " << endl;
    printArray(array, elements);*/

    insertionSort(array, elements);
    

}