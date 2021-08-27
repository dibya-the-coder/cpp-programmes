#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the number of which the table you want: :\n";
    cin>>a;
    int i = 1;
    while(i<=10){
        cout<<a<<" * "<<i<<" = "<<a*i<<endl;
        i++; 
    }
    // getchar();

    return 0;
}
