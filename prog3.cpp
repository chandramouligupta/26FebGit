#include <iostream>

using namespace std;

int difference(int a,int b){
	return a>b?a-b:b-a;
}

int main(int argc, char const *argv[])
{
	/* code */
	int a,b;
	cin>>a>>b;
	cout<<difference(a,b);
	return 0;
}