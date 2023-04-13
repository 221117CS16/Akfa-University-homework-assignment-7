#include <iostream>
using namespace std;
int c(int arr[], int n, int x)
{
    int res = 0;
    for (int i=0; i<n; i++)
        if (x == arr[i])
          res++;
    return res;
}
int main()
{
    int size;
    cin>>size;
    int arr[size];
    for (int j=0; j < size; j++) {
        cin>>arr[j];
    }
    int x;
    cin>>x;
    cout << c(arr, size, x);
    return 0;
}
