#include<iostream>
#include<math.h>
using namespace std;
int main(){
    cout<<"Enter the number:";
    int n ;
    cin>>n;
    int lastdigit;
    int revn = 0;
    while(n>0){
        lastdigit = n%10;
        n=n/10;
        revn = (revn*10)+lastdigit;
    }
    cout<<endl<<"The reverse number is:"<<revn;
    return 0;
}