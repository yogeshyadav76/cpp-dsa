#include<iostream>
using namespace std;
void pattern1(int n,int m){
    /* *****
       *****
       *****
       ******/
    for(int i=1;i<=n;i++){
        for(int j=1; j<=m ;j++){
             cout<<"*";
        }
        cout<<endl;
    }
}
void pattern2(int n,int m){
    /* *
       **
       ***
       **** */
    for(int i=1;i<=n;i++){
        for(int j=1; j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern3(int n,int m){
    /* 1
       12
       123
       1234 */
    for(int i=1;i<=n;i++){
        for(int j=1; j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void pattern4(int n,int m){
    /* 1
       22
       333
       4444 */
    for(int i=1;i<=n;i++){
        for(int j=1; j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }

}
void pattern5(int n,int m){ 
     /* ****
        ***
        **
        *  */
    for(int i=1;i<=n;i++){
        for(int j=1; j<=n-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern6(int n,int m){ 
     /* 1234
        123
        12
        1  */
    for(int i=1;i<=n;i++){
        for(int j=1; j<=n-i+1;j++){
            cout<< j;
        }
        cout<<endl;
    }
}
void pattern7(int n, int m){
    /*      *
           ***
         *******
        ********* */
    for(int i = 1 ;i<=n;i++){
        for(int j=1 ;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=(2*i)-1;k++){
            cout<<"*";
        }
        for(int l=1 ;l<=n-i;l++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern8(int n, int m){

    /* *********
        *******
         *****
          ***
           *   */
    for(int i = 1 ;i<=n;i++){
        for(int j=1 ;j<i;j++){
            cout<<" ";
        }
        for(int k=1;k<=(2*(n-i))+1;k++){
            cout<<"*";
        }
        for(int l=1 ;l<=n-i;l++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern9(int n, int m){
    /* 1
       01
       101
       0101   */
       int start =1;
    for(int i = 0 ;i<=n;i++){
        if (i%2 ==0) start =1;
        else start =0;
        for (int j=0 ;j<=i ; j++){
            cout << start;
            start = 1-start;
        }
        cout<<endl;
    }
}
void pattern10(int n , int m){
    /* 1      1
       12    21
       123  321
       12344321 */
    for(int i =1 ; i<=n ;i++){
        for(int j=1 ; j<=i;j++){
            cout << j ;
        }
        for(int k=0 ; k<=2*n-2*i;k++){
            cout << " " ;
        
        }
        for(int l=i;l>=1 ; l++){
            cout << l ;
        }
        cout << endl ;
    }
}
void pattern11(int n , int m){
    /* 1      1
       12    21
       123  321
       12344321 */
    for(int i =1 ; i<=n ;i++){
        for(int j=1 ; j<=i;j++){
            cout << j ;
        }
        for(int k=0 ; k<=2*n-2*i;k++){
            cout << " " ;
        
        }
        for(int l=i;l>=1 ; l++){
            cout << l ;
        }
        cout << endl ;
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    pattern10(n,m);
    return 0;
}