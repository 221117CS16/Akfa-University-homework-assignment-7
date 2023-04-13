
#include <iostream>
using namespace std;
void jek(int arr[],int size){
    int start=0;
    int end=size-1;
    int temp=0;
    while (start < end) {
        temp=arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;

    }
    for(int i=0; i < size;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int j=0; j < n; j++) {
        cin>>arr[j];
    }
    jek(arr, n);
    return 0;
}
