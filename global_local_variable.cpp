#include<iostream>
using namespace std;

int y=20;

void local(int x){
    x=10;
    cout<<"Local : "<<x<<endl;
}

int main(){
    int z;
    cout<<"Global : "<<y<<endl;
    local(z);
    return 0;
}