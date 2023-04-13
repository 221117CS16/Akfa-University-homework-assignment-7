#include <iostream>
using namespace std;
void kej(int arr[],int size){
    bool pald=true;
    for (int i=0; i < size / 2 && size != 0; i++) {
        if (arr[i] != arr[size - i - 1]) {
            pald=false;
        }
    }
    if (pald == 1) {
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
}
int main()
{
    int size;
    cin>>size;
    int arr[size];
    for (int j=0; j < size; j++) {
        cin>>arr[j];
    }
    kej(arr, size);
    return 0;
}
