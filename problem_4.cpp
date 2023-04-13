#include <iostream>
using namespace std;
void lll(int arr[],int size){
    int sum=0;
    for(int i=0; i < size;i++){
        sum+=arr[i];
    }
    if (sum % 2 ==0) {
        cout<<"ODD \n";
    }else{
        cout<<"Even \n";
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
    lll(arr, n);
    return 0;
}
