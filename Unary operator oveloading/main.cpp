#include <iostream>
using namespace std;
class unary{
    int x, y;
public:
    unary(int a=0, int b=0):x(a),y(b){}
    void print(){
        cout<<x<<" "<<y<<endl;
    }
//    void operator ++(){
//        x++;
//        y++;
//
//    }
    unary operator ++(){//prefix ++r
        x++;
        y++;
        return *this;
    }

    unary operator++(int){//post r++
        unary t;
        t=*this;
        x++;
        y++;
        return t;
    }
//    void operator -(){
//        x=-x;
//        y=-y;
//    }
    unary operator -(){
        x=-x;
        y=-y;
        return *this;
    }
    unary operator +=(unary b){
        x+=b.x;
        y+=b.y;
        return *this;
    }
    bool operator!(){
        return x==0&&y==0;
    }

};
int main() {
   unary r(10,20),k(4,5);
//   r++; // 11 21
//   k=++r;
//   k.print(); // 11 21
//   r.print();// 11 21
//   k=r++; // k=r then r++
//   k.print();//11 21
//   r.print(); // 12 22
//-r;
//r.print(); //-10 -20
//k=-r; //-10 -20
//k.print();
//r+=k;
//r.print();// 14 25
//k.print(); //4 5
//if(!r)cout<<true;
//else cout<<false;

}
