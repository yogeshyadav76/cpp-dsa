#include <iostream>
using namespace std;
int main(){
    int size ;
    cout << "Enter the size of the array : " << endl ;
    cin >> size ;
    int arr[size];
    for(int i =0 ;i<size ;i++){
        cout << "Enter the "<< i << " index element of the array : " << endl ;
        cin >> arr[i];
    }
    int temp =0;
    for(int i =0 ;i<size/2 ;i++){
        temp = arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;
    }
// better approach for 2 pointer method    
// int start = 0;
// int end = size - 1;
// while(start < end) {
//     int temp = arr[start];
//     arr[start] = arr[end];
//     arr[end] = temp;
//     start++;
//     end--;
// }
    cout << " The reverse array is : " << endl ;
    for(int i =0 ;i<size ;i++){
        cout << arr[i] << " " ;
        
    }

    return 0;    
}