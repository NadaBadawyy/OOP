#include <iostream>
using namespace std;
class R{
    int x,y,z;
public:
    R(int a=0, int b=0, int c=0):x(a),y(b),z(c){}
    void print(){
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
    bool operator ==(R b){
        return x==b.x&&y==b.y&&z==b.z;
    }
    bool operator <=(R b){
        return x<=b.x&&y<=b.y&&z<=b.z;
    }
    bool operator >=(R b){
        return x>=b.x&&y>=b.y&&z>=b.z;
    }
    bool operator >(R b){
        return x>b.x&&y>b.y&&z>b.z;
    }
    bool operator <(R b){
        return x<b.x&&y<b.y&&z<b.z;
    }
    bool operator !=(R c){
        return x!=c.x||y!=c.y||z!=c.z;
    }


};
int main() {
R a(10, 30 ,56),b(10, 30 ,50 );
if(a==b){
    cout<<"a is equal to b";
}
else if(a!=b) {
        cout<<"a is not equal to b\n";
    if (a<=b) cout<<"a is less than b\n";
    if(a>=b) cout<<"a is greater than b\n";
    }

}
