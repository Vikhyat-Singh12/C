#include<iostream>
using namespace  std;

int main(){
    int n,a,b=0;
    cin>>n;
    a=n*n;

    while (a>0)
    {
        b += a%10;
        a = a/10; 
    }
    if (b==n)
    {
        cout<<"yes";
    }
    else cout<<"no";
    
    

}
