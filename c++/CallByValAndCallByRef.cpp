#include <iostream>
using namespace std;
int sum (int a, int b){
    int c = a +b;
    return c;
}

int main(){
    int n1, n2;
    cout<<"enter the numbers: \n";
    cin>>n1;
    cin>>n2;
    cout<<"the sum is :"<<sum(n1, n2);


    return 0;
}