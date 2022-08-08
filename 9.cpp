/*
    Pascal's triangle pattern
    @author Sushil Jangid
*/
#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    int a[n-1],temp[n-1];
    temp[0] = 1;
    for(i=1;i<=n;i++){
        for(j=0;j<i;j++){
            if(j==0 || j==i-1){
                a[0] = a[j] = 1;
                cout<<a[0]<<" ";
            }
            else{
                temp[j] = a[j] + a[j-1];
                cout<<temp[j]<<" ";
            }
        }
        //copy back the elements
        for(int z=1;z<j-1;z++){
            a[z] = temp[z];
        }
        cout<<endl;
    }
    return 0;
}