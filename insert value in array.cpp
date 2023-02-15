//code for insert data into array ant to dekete data of user desire
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];

    //let insert values


    for (int i = 1; i <= n; i++){
        cout<<"Enter The Value At "<<i<<" place:";
        cin>>arr[i];
    }

//asking user which place's value he want to remove

int a;
cout<<"Enter the place  from you want to remove the value\n";
cin>>a;

for (int i =1; i <= n; i++)
{
    if (i!=a){
        cout<<arr[i]<<"\n";
    }
   
    
}

}
