#include<iostream>
using namespace std;
void printSpaces(int n){
    for(int i=1;i<=n;i++){
        cout<<" ";
    }
}
int main(){
    int rows,i,j,c;
    cout<<"Enter rows\t";
    cin>>rows;
    for(i=1;i<=rows;i++){
        if(i==1){
            cout<<i;
            printSpaces(rows-1);
        }else if(i==rows){
            printSpaces(rows-1);
            cout<<i;
        }else{
            printSpaces(1);
            c = 65+i-3;
            for(j=2;j<rows;j++){
                if(i==j){
                    cout<<i;
                    c = 90;
                }else if(j<i){
                    cout<<(char)c--;
                }else{
                    cout<<(char)c--;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}