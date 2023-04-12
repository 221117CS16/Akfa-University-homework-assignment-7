#include <iostream>
using namespace std;
int prob(int arr[],int n){
int sum=0;
for(int i=0;i < n;i++){
        if(arr[i] > 0){
    sum+=arr[i];
        }
}
return sum;
}
int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int j=0;j < size;j++){
        cin>>arr[j];
    }
   cout << prob(arr,size);

    return 0;
}
