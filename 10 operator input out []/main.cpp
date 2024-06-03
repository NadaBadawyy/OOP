#include <iostream>
using namespace std;
class reg{
    int wid,hi,aa[5];

public:
    reg(int a=0, int b=0):wid(a),hi(b){
        for(int i=0;i<5;i++){
        aa[i]=i+5;
        }

    }
    void print(){
        cout<<wid<<" "<<hi<<endl;
    }
    friend istream &operator >>(istream& in, reg&c);
    friend ostream&operator <<(ostream &out, reg&c);
operator int(){
    return int(wid);
}
    int operator[](int c){
        return aa[c];
    }

};
istream&operator >>(istream &in, reg&c ){
    in>>c.wid>>c.hi;
    return in;
}
ostream&operator <<(ostream &out, reg&c ){
    out << c.wid<<" "<< c.hi;
    return out;
}



int main() {
reg c1(10,20),c2;
//cin>>c2;
//cout<<c2;
//int x=9;
//x=c1;
//cout<<x<<endl;
cout<<c1[1];
}
