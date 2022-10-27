#include<iostream>
#include<string>
using namespace std;

string add(string s,int n){
    string s1=s;
    for(int i=1;i<n;i++)
        s+=s1;
    return s;
}
int main() {
    string str="akg";
    int n;
    cin>>n;
   cout<<add(str,n)<<endl;
   return 0;
}