#include <iostream>
#include<array>
#include<bits/stdc++.h>
using namespace std;
template<typename t, size_t size>
void print(const array<t,size>&ss){
for(auto s:ss) cout<<s<<endl;
}
int main() {
//    array<int,8>r1{1,2,3,4,5};
//    print(r1);
vector<int>v{1,2,3,4,5,6};
auto it1=v.rend();// -->[][1][2][3]
it1--;
auto it2=v.rbegin();//[][1]...[6]<--
it2++;
it2++;
cout<<*it1<<endl;//1
cout<<*it2;
}
