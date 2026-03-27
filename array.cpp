#include<iostream>
#include<array>

using namespace std;
int main(){
    array<int,5> arr={1,2,3,4,5};
    cout<<"Size of array is: "<<arr.size()<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

return 0;
}