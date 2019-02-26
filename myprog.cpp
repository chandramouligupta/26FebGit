#include <iostream>

using namespace std;

int add(int a,int b){
	return a+b;
}

int main(int argc, char const *argv[])
{
	/* code */
	int a,b;
	cin>>a>>b;
	cout<<"A+B = "<<add(a,b)<<"\n";
	return 0;
}