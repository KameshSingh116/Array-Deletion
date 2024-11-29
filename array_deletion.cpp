#include<iostream>
using namespace std;

int main(){
    int n;
    int arr[100];
    cout<<"Enter the number of elements in the array:";
    cin>>n;
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Original array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<'\t';
    }

    int position;
    cout<<"Enter the position where you want to delete an element:";
    cin>>position;
    for(int i=position;i<n;i++){
        arr[i]=arr[i+1];
    }
    n--;

    cout<<"The updated array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}