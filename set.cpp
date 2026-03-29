#include<iostream>
#include<set>
using namespace std;

//set contains only unique elements and it is ordered by default
//it is implemented using balanced binary search tree
//it is not possible to access elements using index
//it is not possible to modify elements using index

int main(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(1);
    s.insert(2);
    s.insert(3);
    for(auto i : s){
        cout<<i<<" ";
    }
    return 0;
}