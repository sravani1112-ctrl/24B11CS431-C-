#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter a,b :"<<endl;
	cin>>a>>b;
	int res = a-b;
	try{
		if(res!=0){
			cout<<a/res;
		}else{
			throw(res);
		}
	}
	catch(int x){
		cout<<"zero division error"<<endl;
		cout<<"Successful termination"<<endl;
		cout<<x;
	}
	
}
