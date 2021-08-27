#include <iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}
int main(){

    int num1, num2;
    cout<<"enter num1\n";
    cin>>num1;
    cout<<"enter num2\n";
    cin>>num2;
    cout<<"the sum is: "<<sum(num1, num2);
    return 0;
}