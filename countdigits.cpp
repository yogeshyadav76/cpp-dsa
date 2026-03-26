#include<iostream>
#include<math.h>
using namespace std;
int main(){
    cout<<"Enter the number:";
    int n ;
    cin>>n;
    int c=0;
    while(n>0){
        c=c+1;
        n=n/10;
    }
    cout<<endl<<"The total number of digits are:"<<c;
    return 0;
}
//Another method to count th digits
/*
int main (){
    int c = int()(log10n +1);
    return 0;
}
*/