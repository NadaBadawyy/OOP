#include <iostream>
using namespace std;
class obj{
    int x,y,*p;
public:
    obj(int a, int b, int c):x(a),y(b){
        p=new int;
        *p=c;
    }
    obj(const obj&d){
        x=d.x;
        y=d.y;
        p=new int;
        *p=*(d.p);
        *p=8;
    }
    obj operator=(const obj &j){
        x=j.x;
        y=j.y;
        p=new int;
        *p=*(j.p);
        return*this;
    }
    void print(){
        cout<<x<<" "<<y<<" "<<*p<<endl;
    }

};

int main() {
obj c1(10,11,14);
    c1.print();
obj c2=c1;

c2.print();
}
