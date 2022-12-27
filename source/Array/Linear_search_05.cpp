#include<iostream>
 using namespace std;
 bool search(int arr[], int size, int element){
for(int i=0; i<size; i++){
  if(arr[i]==element)
  return 1;
}
return 0;
 }
  int main()
  {
     int arr[10]={1,2,3,4,5,7,8,9,10,11};
//wheter 1 is present in it or not
int element;
  cout<<"Enter the element "<<endl;
  cin>>element;
  bool found =search(arr,10,element);
(found)?cout<<"Element is found":cout<<"Elemet is not found"<<endl;
  }
