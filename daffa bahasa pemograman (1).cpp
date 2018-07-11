#include<iostream>
#include<conio.h>
using namespace std;
 

 int main(){
  
 
  int a, b, c;

  cout<<"input bilangan 1 : ";
  cin>>a;
  cout<<"input bilangan 2 : ";
  cin>>b;
  cout<<"input bilangan 3 : ";
  cin>>c;
  
	if (a>b){
   		if (a>c){
   		cout<<"bilangan terbesar anda adalah "<<a;}
   		else{
   		cout<<"bilangan terbesar anda adalah "<<c;
  	 }
   
	}else{
   		if (b>c){
   		cout<<"bilangan terbesar anda adalah "<<b;}
   		else{
   		cout<<"bilangan terbesar anda adalah "<<c;
   		}
  	}
}

