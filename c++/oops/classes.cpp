#include <iostream>
using namespace std;

class employee{
    private:
    int a, b, c;

    public:
    int d, e;
    void setDeta(int a1,  int b1, int c1);//decelaration
    void getData(){
        cout<<" value of a is :"<<a<<endl;
        cout<<" value of b is :"<<b<<endl;
        cout<<" value of c is :"<<c<<endl;
        cout<<" value of d is :"<<d<<endl;
        cout<<" value of e is :"<<e<<endl;
        
    }

};
void employee :: setDeta(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;

}
int main(){
	employee pupun;
    pupun.d = 160;
    pupun.e = 2;

    pupun.setDeta(1, 2, 3);
    pupun.getData();

    return 0;
}