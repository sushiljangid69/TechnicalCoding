#include<bits/stdc++.h>
using namespace std;
int main(){
    int size = 10;
    // int a[] = {1,60,-10,70,-80,85};
    // int a[] = {1,3,-5,7,8,20,-40,6};
    int a[] = {-14,40,35,-56,-25,24,70,-60,5,-20};
    int b[size],end[size];

    int i,j,endIndex,min;
    //find the minimum
    for(i=0;i<size;i++){
        min = INT_MAX;
        for(j=i+1;j<size;j++){
            if(min>abs(a[i]+a[j])){
                min = a[i] + a[j];
                endIndex = j;
            }
        }
        b[i] = min;
        end[i] = endIndex;
    }
    //find the minimum in the b array
    min = abs(b[0]);
    for(j=1;j<size;j++){
        if(min>abs(b[j])){
            min = abs(b[j]);
            endIndex = j;
        }
    }
    /*
    cout<<"a array"<<endl;
    for(int k:a){
        cout<<k<<"\t";
    }
    cout<<endl<<"b array"<<endl;
    for(int k:b){
        cout<<k<<"\t";
    }
    cout<<endl<<"end array"<<endl;
    for(int k:end){
        cout<<k<<"\t";
    }
    */
    //cout<<endl<<"End index = "<<endIndex<<endl;
    cout<<endl<<"Minimum result is "<<min<<endl;
    cout<<"Start "<<a[endIndex]<<endl;
    cout<<"End "<<a[end[endIndex]];
    return 0;
}