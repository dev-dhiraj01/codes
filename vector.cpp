#include<iostream>
#include<vector>

using namespace std;
int main(){

    vector<int> marks;

    vector<int > miles(10);

    vector<int> distance(15,0);

    int arr[] = {10,20,30,40,50,60};
    
    //for each loop to access the elements 
    for(int i : arr){
        cout<<i<<endl;
    }

    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
  

    //traversing using iterator
    vector<int>::iterator it = marks.begin();
cout<<"printing using iterator"<<endl;
while(it != marks.end()){
    cout<<*it<<endl;
    it++;
}

cout<<"printing using for loop "<<endl;
    for(int i = 0; i < 3; i++ ){
        cout<<marks[i]<<endl;

    }
return 0;
}