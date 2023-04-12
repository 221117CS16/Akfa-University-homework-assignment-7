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
    int n;
    cin>>n;
    int arr[n];
    for(int j=0;j < n;j++){
        cin>>arr[j];
    }
   cout << prob(arr,n);

    return 0;
}
