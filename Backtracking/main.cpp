#include <iostream>
#include<bits/stdc++.h>
using namespace std;
string path;
const int nrows=4,ncol=5;
char a[nrows][ncol];
int cnt=0;
//void possible_paths(int row, int col){
//    if(row==nrows-1&&col==ncol-1){
//        cout<<path<<endl; cnt++;
//        return;
//    }
//    if(col+1<nrows&& a[row][col+1]!='#'){
//        path.push_back('R');       // DO
//        possible_paths(row, col+1);// REC
//        path.pop_back();           // UNDO
//    }
//    if(row+1<ncol&&a[row+1][col]!='#'){
//        path.push_back('D');
//        possible_paths(row+1,col);
//        path.pop_back();
//    }
//}
void possiblepathhes(int row, int col){
    if(row==nrows-1&&col==ncol-1){
        cout<<path<<endl;
        cnt++;
        return;
    }
    if(col+1<ncol&&a[row][col+1]!='#'){
        path.push_back('R');
        possiblepathhes(row,col+1);
        path.pop_back();
    }
    if(row+1<nrows&&a[row+1][col]!='#'){
        path.push_back('D');
        possiblepathhes(row+1,col);
        path.pop_back();
    }

}
int v[5];
bool operatorr(int index, int value){
    if(index==5){
        if(value==23)
            return 1;
        return 0;
    }

   return  operatorr(index+1, value+v[index])||
    operatorr(index+1, value-v[index])||
    operatorr(index+1, value*v[index]);
}
bool valid(int i){
    i>=0&&i<10;
}
void fn(int a,int b,int c,int d){
    if(a+b+c+d==30){
        cout<<a<<" "<<b<<" " <<c<<" "<<d<<endl;
    }
  if(a==9&&b==9&&c==9&&d==9){
      return;
  }
   if(d==9&&b==9&&c==9){
      fn(a+1,0,0,0);

  }
    else if(d==9&&c==9){
        fn(a,b+1,0,0);
    }
   else if(d==9){
        fn(a,b,c+1,0);
    }
    else fn(a,b,c,d+1);


}
void RecPermute(string soFar, string rest)
{
    if (rest == "") {
        cout << soFar << endl;
    } else {
        for (int i = 0; i < rest.length(); i++) {
            string next = soFar + rest[i];
            string remaining = rest.substr(0, i)
                               + rest.substr(i+1);
            RecPermute(next, remaining);
        }
    }
}
// "wrapper" function
void ListPermutations(string s) {
    RecPermute("", s);
}
int main() {
    for (int i = 0; i < nrows; ++i) {
        for (int j = 0; j < ncol; ++j) {
            cin>>a[i][j];
        }
    }
    possiblepathhes(0,0);
cout<<"the num of paths is "<<cnt<<endl;
/*
    bool x = 0;
    while (cin >> v[0] >> v[1] >> v[2] >> v[3] >> v[4] && v[0] || v[1] || v[2] || v[3] || v[4]) {
        sort(v, v + 5);
        while (next_permutation(v, v + 5)) {
            if (operatorr(1, v[0])) {
                x = 1;
                break;
            }
        }
        if(x)cout<<"possible\n";
        else cout<<"impossible\n";
    }
*/

}