#include <iostream>

using namespace std;
template<class tt>
class charr{
public:
  charr(tt x){
      cout<<x<<" is not a char\n";
  }
};
template<>
class charr<char>{
public:
    charr(char x){
        cout<<x<<" is a char\n";
    }
};
template<class t>
t *merge2arrays(t a1[],int size1, t a2[],int size2){
    t *merged=new t[size1+size2];
    for (int i = 0; i < size1; ++i) {
        merged[i]=a1[i];
    }
    for (int i = 0; i < size2; ++i) {
        merged[i+size1]=a2[i];
    }
    return merged;
}
template<class t>
void printarray(t a[],int size ) {
    for (int i = 0; i < size; ++i) {
        cout << a[i] << " ";
    }
}
int main() {
    charr c(10.8);
    charr d('d');
    charr<string>a("kkf");
    int a1[]={1,2,3,4};
    int a2[]={5,6,7,8,9};
    printarray(merge2arrays(a1,4,a2,5),9) ;
}
