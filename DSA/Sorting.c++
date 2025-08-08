#include <bits\stdc++.h>

using namespace std;

void SelectionSort(int array[], int n){
    for(int i=0; i< n-1; i++){
        int min_idx= i;
        for(int j=i; j<n; j++){
            if(array[j]< array[min_idx]){
                min_idx= j;
            }
        }
        swap(array[i], array[min_idx]);
    }
}

void BubbleSort(int array[], int n){
    for(int i= 0; i< n - 1; i++){
        for(int j=0; j< n - i - 1; j++){
            if(array[j] > array[j + 1]){
                swap(array[j], array[j + 1]);
            }
        }
    }
}

void InsertionSort(int array[], int n){
    for(int i = 1; i < n; i++){
        int j = i;
        while(j > 0 && array[j] < array[j - 1]){
            swap(array[j], array[j - 1]);
            j--;
        }
    }
}

void merge(vector<int> &array, int low, int mid, int high){
    vector<int> temp;
    int left= low;
    int right= mid + 1;

    while(left<= mid && right<= high){
        if(array[left] <= array[right]){
            temp.push_back(array[left]);
            left++;
        } else {
            temp.push_back(array[right]);
            right++;
        }
    }

    while(left<= mid){
        temp.push_back(array[left]);
        left++;
    }

    while(right<= high){
        temp.push_back(array[right]);
        right++;
    }

    for(int k = low; k <= high; k++){
        array[k] = temp[k - low];
    }
}
void MergeSort(vector<int> &array, int low, int high){
    if(low == high) return;

    int mid= (low + high)/2;
    MergeSort(array, low, mid);
    MergeSort(array, mid + 1, high);
    merge(array, low, mid, high);
}

int main(){
    int arr[5]= {5, 3, 4, 1, 2};

    // SelectionSort(arr, 5);
    // BubbleSort(arr, 5);
    // InsertionSort(arr, 5);

    vector <int> arra= {5, 3, 4, 1, 2};
    MergeSort(arra, 0, 4);
    for(int i: arra){
        cout << i << " ";
    }
}