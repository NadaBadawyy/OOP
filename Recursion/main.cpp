#include <iostream>
using namespace std;
string s;

void printrev(int indx){ // rev string
    if(indx==s.size())
        return;
    printrev(indx+1);
    cout<<s[indx];
}
int a[5]={1,2,3,4,56};
 int sum(int idx){
    if(idx==5)
        return 0;
   return a[idx]+sum(idx+1);

}
int series(int n) {
    if (n == 1) {
        return 1;
    } else if (n % 2)
        return 1 + series(3 * n + 1);
    else if (!(n % 2))
        return 1 + series(n / 2);
}
bool palindrome(string s){
     int l=s.size();
     if(l<=1){
         return 1;
     }
     return (s[0]==s[l-1]&& palindrome(s.substr(1,l-2)));
 }

 int binaryserach(int a, int b , int arr[],int l) {
     int low = a, high = b, mid = (low + high) / 2;
     if(low>high) return -1;
     else if (arr[mid] < l) {
         binaryserach(mid + 1, high, arr, l);
     } else if (arr[mid] > l) {
         binaryserach(low, mid - 1, arr, l);
     } else if (arr[mid] == l) {
         return mid;
     }

 }
void MoveSingleDisk(char start, char finish) {
    cout << start << " -> " << finish << endl;
}
void MoveTower(int n, char start, char finish, char temp){
    if (n == 1)
        MoveSingleDisk(start, finish);
    else {
        MoveTower(n - 1, start, temp, finish);
        MoveSingleDisk(start, finish);
        MoveTower(n - 1, temp, finish, start);
    }

}
bool IsOdd(unsigned int n);
bool IsEven(unsigned int n) {
    if (n == 0)
        return true;
    else
        return IsOdd(n - 1);
}
bool IsOdd(unsigned int n) {
    return !IsEven(n);
}
int main() {
//  cin>>s;
//    printrev(0);
//cout<<sum(0);
//cout<<palindrome("haah");
//int a[5]={1,2,3,4,5};
//    cout<<binaryserach(0,4,a,7);
//    MoveTower(5, 'A', 'C', 'B');
cout<<IsEven(400000);
}
