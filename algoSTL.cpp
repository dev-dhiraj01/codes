#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){

    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    cout<<"finding 5 -> "<<binary_search(v.begin(),v.end(),5)<<endl;
    cout<<"finding Upper Bound -> "<<upper_bound(v.begin(),v.end(),3)-v.begin()<<endl;
    
return 0;
}