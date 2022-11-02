#include <iostream>
using namespace std;

int main(){
        int a, b,years;
        cin>>a>>b;
        for(years=0;a<=b;years++){
                a=3*a;
                b=2*b;
        }

        cout<<years<<endl;
        return 0;

}
