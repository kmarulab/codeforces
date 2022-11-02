#include <iostream>
using namespace std;

int main(){
    int matrix[5][5],x,y;
    //fetch data and store int matrix
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            int inp;
            cin>>inp;
            if(inp==1){
                x=i;
                y=j;
            }
            matrix[i][j]=inp;
        }
    }
    int count=0;
    while((x!=2)|| (y!=2)){
        if(x<2){
            x++;
            count++;
        } else if(x>2){
            x--;
            count++;
        }

             if(y<2){
                 y++;
                 count++;
            } else if(y>2){
                y--;
                count++;
            }
    }
    cout<<count<<endl;
}
