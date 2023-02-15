//program to store more values than the size of array in an array

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter The Size Of An Array:";
	cin>>n;
	
	int arr[n];
	
	cout<<"This Array will store "<<n+1<<" Values\n Okay Then Now Enter the values in your array\n";
	
	for(int i=0; i<=n;i++){
		cout<<"Enter the value at "<<i+1<<" position"<<endl;
		cin>>arr[i];
	}
	
	cout<<"Your Eneterd values Goes Here\n";
	
	for(int i=0; i<=n;i++){
		cout<<arr[i]<<"\n";
	}
	
	cout<<"I think you have  noticed that array is storing "<<n+1<<" Values";
}

