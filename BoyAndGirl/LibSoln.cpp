#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int main()
{
	char m[101];
 
	cin>>m;
	 int l  = strlen(m);
	sort(m,m+l);
	 int count =0;
    for(int i=0; i<l; i++)
    {
        if(m[i] != m[i+1])
        {
            count++;
        }
    }
    if(count%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }
}
