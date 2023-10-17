#include <iostream>
using namespace std;
int pow(int n,int p){
    if(p==0)
    return 1;
    else if(p==1)
    return n;
    else
    return n*pow(n,p-1);
}
int main() {
   int p,n;
   cout<<"Enter the number:";
   cin>>n;
   cout<<"Enter the power:";
   cin>>p;
   cout<<pow(n,p);
    return 0;
}
