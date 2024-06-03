#include <iostream>
using namespace std;
class sq;
class reg{
    int wid,hi;
public:
    reg(){
        wid=0;
        hi=0;
    }
    reg(int a,int b):wid(a),hi(b){}

    int area(){
        return wid*hi;
    }
    friend class sq;
};
class sq{
    int l,m;
public:
    sq(){
        l=0;
        m=0;
    }
    sq(int d,int g):l(d),m(g){}

    int area(){
        return l*m;
    }
    int covert(reg);

};



int sq::covert(reg g){
   l=g.wid;
   m=g.hi;
}
int main() {
reg r(3 ,5);
sq s;
s.covert(r);
cout<<s.area();
}
