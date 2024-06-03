#include <iostream>
using namespace std;
class bi{
    int x, y;
public:
    bi(int a=0, int b=0):x(a),y(b){}
    void print(){
        cout<<x<<" "<<y<<endl;
    }
    bi operator +(bi c){
        bi r;
        r.x=x+c.x;
        r.y=y+c.y;
        return r;
    }
    bi operator +(int b){
        bi r;
        r.x=x+b;
        r.y=y+b;
        return r;
    }
  friend  bi operator +(int c, bi d);
};
bi operator +(int c, bi d){
    bi c3;
    c3.x=c+d.x;
    c3.y=c+d.y;
    return c3;
}
int main() {
bi c1(10,11),c2(1,2),c3;
c3=c1+c2;
c3.print();
c3=c1+10;
c3.print();
c3=10+c1;
c3.print();
}
