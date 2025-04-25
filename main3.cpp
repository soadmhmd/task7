#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int size;
    cout<<"ENTER the array size:"<<endl;
    cin>>size;
    int *arr=new int[size];
    for (int i=0; i<size; i++) {
        arr[i]=(i+1)*(i+1);
    }
    cout<<"Array elements:";
    for (int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
    delete [] arr;
    return 0;
}
