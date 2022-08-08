#include<iostream>
using namespace std;
int main(){
    int rows,k,g;
    cin>>rows;
    k=1;
    for(int i=1;i<=rows;i++){
        //spaces
        for(int j=rows;j>i;j--){
            cout<<" ";
        }
        if(i<rows){
            for(int j=1;j<=k;j++){
                if(j==1 || j==k){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
            }
        }
        else{
            for(int j=1;j<=rows;j++)
                cout<<"* ";
        }
        k+=2;
        cout<<endl;
    }
    return 0;
}