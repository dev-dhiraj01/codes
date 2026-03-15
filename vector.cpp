#include<iostream>
#include<vector>

using namespace std;
int main(){

    vector<int> marks;

    vector<int > miles(10);

    vector<int> distance(15,0);

    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    for(int i = 0; i < 3; i++ ){
        cout<<*marks.begin()<<endl;
        marks.begin();
    }
return 0;
}