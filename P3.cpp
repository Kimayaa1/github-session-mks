//If number is negative and still we have to print positive number.
#include<iostream>
using namespace std;
int main(){
int x;
cout<<"Enter a number:- ";
cin>>x;
if (x<0){
	cout<<-1*x;
}
else{
	cout<<x;
}
}
