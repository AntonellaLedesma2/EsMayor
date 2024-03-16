#include <bits/stdc++.h>
using namespace std;
int EsMayor(int a, int b, int c);
int main(){
	int n1, n2, n3;
	
	cout<<"ingrese un numero: "<<endl;
	cin>>n1;
	
	cout<<"ingrese otro numero: "<<endl;
	cin>>n2;
	
	cout<<"ingrese otro numero: "<<endl;
	cin>>n3;
	
	cout<<"el mayor es: "<<EsMayor(n1, n2, n3)<<endl;
	
	return 0;
	}
	int EsMayor(int a, int b, int c){
		int maximo;
		
	if(a > b&&c){
		maximo=a;
	}
	if(b > a&&c){
		maximo=b;
	}
	if(c > a&&b){
		maximo=c;
	}
	return maximo;
	}
	