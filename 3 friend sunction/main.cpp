#include <iostream>
using namespace std;
class reg{
    int w,h;
public:
    reg(){}
    reg(int i, int j):w(i),h(j){}
    void area(){
        cout<<w*h;
    }
    friend reg triple(reg c);
};
reg triple(reg c){
    reg y;
    y.w=c.w*3;
    y.h=c.h*3;
    return y;
}
int main() {
   reg r(10,2);
   r.area();
   reg r2=triple(r);
   cout<<"\n";
   r2.area();
}
