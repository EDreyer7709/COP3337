#include <iostream>
#include <string>
using namespace std;

int main(){
int x=1;
int y=3;
x=(x>=y) ? y*2 : y;
cout<<x;

x=1;
y=3;
if (x>=y) {
    x=y*2;
} else {
    x=y;
}
cout<<x;
return 0;
}