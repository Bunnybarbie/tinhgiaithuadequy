#include <iostream> 
#include<stdio.h>
using namespace std;

int gt(int n){
	if (n==0){
		return 1;
	}
	else
	return n*gt(n-1);
}
int main(){
	cout << gt(7)<<endl;
	return 0;
}
