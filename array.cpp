#include<iostream>
#include<array>

using namespace std;
int main(){
    array<int,5> arr={1,2,3,4,5};
    cout<<"Size of array is: "<<arr.size()<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    cout<<"Element at index 2 is: "<<arr.at(2)<<endl;
    cout<<"First element is: "<<arr.front()<<endl;
    cout<<"Last element is: "<<arr.back()<<endl;
    cout<<"Is the array empty? "<<(arr.empty()?"Yes":"No")<<endl;
return 0;
}