#include<iostream>
#include<vector>

using namespace std;
int main(){

    //declaration of empty vector
    vector<int> marks;
    
    //declaration of empty vector with defined size
    vector<int > miles(10);
    
    //declaration of empty vector with defined size and all initialized with 0
    vector<int> distance(15,0);

    int arr[] = {10,20,30,40,50,60};
    
    //for each loop to access the elements 
    for(int i : arr){
        cout<<i<<endl;
    }

    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);

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

    //traversing using for loop but elements should be assigned valus
cout<<"printing using for loop "<<endl;
    for(int i = 0; i < 3; i++ ){
        cout<<marks[i]<<endl;

    }

    // declaration of 2D vector
    vector<vector<int>> arr1(5, vector<int>(5, 0));

    // deriving the seze of the array
    int rows = arr1.size();
    int col = arr1[0].size();

    return 0;
}