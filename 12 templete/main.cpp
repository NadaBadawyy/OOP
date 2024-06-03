#include <iostream>
#include<bits/stdc++.h>
using namespace std;
template<class t, class t3>
class num{
    t y;
    t3 x;
public:
    num(t3 a, t b):x(a),y(b){}
    t max();
};
template<class t,class t3>
t num<t,t3>::max(){
    return (x>y)? x:y;
}

template<class t1,class t2>
t1 sum(t1 a, t2 b){
    return a+b;
}


int main() {
    num r1(2,3.8);
    cout<<r1.max();

}
