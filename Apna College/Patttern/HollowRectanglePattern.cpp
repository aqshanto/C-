#include<bits/stdc++.h>
using namespace std;

int main(){
    int row,column;
    cin>>row>>column;
    for(int i =0; i<row;i++){
        for(int j=0;j<column;j++){
            if(i==0 ||i==(row-1)){
                cout<<"*";
            }else if(j==0 || j==(column-1)){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

}