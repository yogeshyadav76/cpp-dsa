#include <iostream>
#include <vector>
using namespace std ;
int main (){
    int n;
    cout << "Enter the number to search " << endl ;
    cin >> n ;
    vector<int> vec ={1,2,3,4,5};
    for(int i=0 ; i<vec.size();i++){
        if(vec[i] == n){
            cout << "The number is find at :" << i << endl ;
        }
        else {
            cout << "The number is not present in the vector" << endl ;
        }
    }
    return 0;
}