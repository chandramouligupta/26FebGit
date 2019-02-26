#include <iostream>

using namespace std;

int add(int a,int b){
	return a+b;
}

<<<<<<< HEAD
int multiply(int a,int b){
	return a*b;
}

||||||| merged common ancestors
=======
int difference(int a,int b){
	return a>b?a-b:b-a;
}

>>>>>>> branch1
int main(int argc, char const *argv[])
{
	/* code */
	int a,b;
	cin>>a>>b;
<<<<<<< HEAD
	cout<<"A+B = "<<add(a,b)<<" A*B = "<<multiply(a,b)<<"\n";
||||||| merged common ancestors
	cout<<"A+B = "<<add(a,b)<<"\n";
=======
	cout<<"A+B = "<<add(a,b)<<" A-B = "<<difference(a,b)<<"\n";
>>>>>>> branch1
	return 0;
}