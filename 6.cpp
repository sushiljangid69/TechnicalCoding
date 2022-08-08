#include<iostream>
using namespace std;
int main(){
    int rows;
    cin>>rows;
    int k = rows;
    if(rows%2 == 0){
        cout<<"Please enter odd rows only";
        return 0;
    }
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=rows;j++){
            if(i==j || j==k){
                cout<<i;
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
        k--;
    }
    return 0;
}