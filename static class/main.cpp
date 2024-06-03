#include <iostream>
using namespace std;
class student{
    static int cnt;
public:
    student(){
        cnt++;
//        cout<<"the nom of obj: "<<cnt<<endl;
    }
    static int getcnt(){
        return cnt;
    }

};
// outside the class initialize static value
int student::cnt=0;
int main() {
   cout<< student::getcnt()<<endl;
   student s1, s4;
   student s2[5];
   cout<< student::getcnt();
}
