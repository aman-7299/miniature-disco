#include<iostream>
 using namespace std;
 void printarray(int arr[],int size){
   cout<<"printing a array"<<endl;
   for(int i=0;i<size;i++){
     cout<<arr[i]<<endl;
   }
 }
int main()
{
  int arr[5];
  int size=5;
   printarray(arr,5);
   int arrsize = sizeof(arr)/sizeof(int);
   cout<<arrsize;
}
