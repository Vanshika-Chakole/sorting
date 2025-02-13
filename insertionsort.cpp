#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0;i<=size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertionSort(int arr[],int size){
    for(int step=1 ; step <= size ; step++){
      int key = arr[step];
      int j = step-1;
    while(j>=0 && key<arr[j])
{
    arr[j+1]=arr[j];
    --j;
}
arr[j+1]=key;
}
}

int main(){
    int data[]={9,8,6,4,2};
    int size = sizeof(data[0]);
    insertionSort(data,size);
    cout<<"Sorted array in ascending order:\n";
    printArray(data,size);
}
