#include<iostream>
#include<map>
using namespace std;

//map is a associative container that contains key-value pairs with unique keys
//it is implemented using balanced binary search tree
//it is not possible to access elements using index
//it is possible to modify elements using index
//map is ordered by default
//map is not thread safe

int main(){

map<int,string> m;

m[1]="Dhiraj";
m[2]="Baleno";
m[3]="mango";

for(auto i : m){
    cout<<i.first<<" "<<i.second<<endl;
}

return 0;
}