#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n ;
    cout << "Enter the size of the array : " << endl ;
    cin >> n ;
    int size = n;
    int arr[n];
    for(int i =0 ;i<n ;i++){
        cout << "Enter the "<< i << " index element of the array : " << endl ;
        cin >> arr[i];
    }
    int smallestindex ;
    int smallest = INT_MAX ;
// we can also use int smallest = arr[0] without using (#include <climits>)
    for(int i=0 ;i<n ; i++){
// also we can directly compare without if statements largest = max(arr[i],largest) or for smallest = min(smallest ,arr[i]) 
// this max function is in cpp and will find the largest value bettwen then.        
        if(smallest > arr[i]){
            smallest = arr[i];
            smallestindex = i ;
        }
    }
    cout << "The smallest element of the array is : " << smallest << " at the " << smallestindex << " index" << endl ;
     
    return 0;    
}
