#include <iostream>
#include <ctime>

using namespace std;
void sum(int *a,int *b){
    *a=*a + *b;
    return;
}
void sub(int *a,int *b){
    *a= *a - *b;
    return;
}
int main () {
    int a,b;
    cin>>a>>b;
    int temp = a;
    sum(&a,&b);
    cout<<a<<endl;
    a = temp;
    sub(&a,&b);
    if(a<0){
        a=-1*a;
        cout<<a;
    }else cout<<a;

   return 0;
}
