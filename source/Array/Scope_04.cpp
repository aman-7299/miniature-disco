#include<iostream>
 using namespace std;
void update(int arr[], int n){
 cout<<"Inside the function"<<endl;
 //upadte array first
arr[0]=120;
for( int i=0; i<4; i++){
  cout<<arr[i]<<endl;
}
cout<<"Going to main"<<endl;
}

  int main() {
   int arr[4]={0,4,7,8};
 update(arr, 4);
 arr[0]=8;
 for (int i=0; i<4; i++){
   cout<<arr[i]<<endl;
 }
   return 0;
 }
