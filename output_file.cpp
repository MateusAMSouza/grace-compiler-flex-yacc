#include <iostream>
using namespace std;
int main(){
int n;
cin >> n;
int a = 0 ;
int b = 1 ;
int c = 1 ;
int i = 2 ;
while ((n!=0)){
if ((n==1)){
cout << n << endl;
}
else {
while ((i<=n)){
c = a+b;
a = b;
b = c;
i = i+1;
}
cout << c << endl;
}
cin >> n;
}
    return 0;
}
