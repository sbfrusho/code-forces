#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int m = min(a,b);
    for(int i=m-1;i>0;i--){
        m *= i;
    }
    cout<<m<<endl;
}