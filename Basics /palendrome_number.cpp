#include<iostream>
#include<math.h>
using namespace std;
int main(){
    cout<<"Enter the number:";
    int n ;
    cin>>n;
    int copy=n;
    int lastdigit;
    int revn = 0;
    while(n>0){
        lastdigit = n%10;
        n=n/10;
        revn = (revn*10)+lastdigit;
    }
    if(revn==copy){
        cout<<endl<<"true,it is a palendrom number";
    }
    else{
        cout<<endl<<"false, it is not an palendrom number";
    }

    return 0;
}