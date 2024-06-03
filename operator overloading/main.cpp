#include <iostream>
using namespace std;
class reg{
    float wid,hi;
public:
    reg(float a=0, float b=0):wid(a),hi(b){}
    void getpar(){
        cout<<"enter the width\n";
        cin>>wid;
        cout<<"enter the hieght\n";
        cin>>hi;
    }
    void show(){
        cout<<wid<<" "<<hi<<"\n";
    }
//    void add(reg r1,reg r2){
//        wid=r1.wid+r2.wid;
//        hi=r1.hi+r2.hi;
//    }
//    reg add(reg r2){
//        reg c;
//        c.wid=wid+r2.wid;
//        c.hi=hi+r2.hi;
//        return c;
//    }
    reg operator +(reg r2){
        reg c;
        c.wid=wid+r2.wid;
        c.hi=hi+r2.hi;
        return c;
    }
};
int main() {
reg r1(3.5,5.5),r2,r3;
r2.getpar();
//r3.add(r1,r2);
//r3.show();
//r3=r1.add(r2);
//r3.show();
r3=r1+r2;//---> r3=r1.operator+(r2)
r3.show();
}
