#include<bits/stdc++.h>
using namespace std;

int sumrec(int n){
    int x=n%10;
    int sum=sum+x;
    int res=sum+sumrec(n/10);
    return res;
}

int main(){
int y=sumrec(254);
    cout<<"hello"<<y<<endl;
    return 0;
}