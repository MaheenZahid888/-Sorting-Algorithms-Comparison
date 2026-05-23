#include <iostream>
using namespace std;

int main() {
    int arr[10] = {8, 4, 2, 1, 5, 12, 30, 9, 13, 10};
    int size = 10;
/*
    //Bubble Sort
    int bubbarr[10];
    for (int i = 0; i < size; i++)
        bubbarr[i] = arr[i];

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (bubbarr[j] > bubbarr[j + 1]) {
                int temp = bubbarr[j];
                bubbarr[j] = bubbarr[j + 1];
                bubbarr[j + 1] = temp;
            }
        }
    }

    cout << "Bubble Sorted: ";
    for (int i = 0; i < size; i++)
        cout << bubbarr[i] << " ";
    cout << endl; 

   //insertion sort
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;*/

     for (int i = 0; i < size-1; i++) {
        int smallest = i; 

        for (int j = i+1; j < size; j++) {
            if (arr[j] < arr[smallest]) {
                smallest = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = temp;
    }
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}

