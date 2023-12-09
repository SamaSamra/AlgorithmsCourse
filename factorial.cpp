#include<iostream>
using namespace std;
long fact (int n){
    if(n==1)
       return 1;
    else
       return n * fact(n-1); }
main(){
int n;
cout<<"add a number\n";
cin>>n;
cout<<fact(n);

}
