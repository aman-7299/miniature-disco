#include<iostream>
 using namespace std;
 void printArray(int arr[], int n){
   for(int i=0;i<n;i++){
     cout<<arr[i]<<" "<<endl;

   }
 }
void sortone(int arr[], int n){
  int i =0;
   int j =n-1;
   int step=0;

   while(left<right){
     cout<<"Step"<<step<<endl;
     printArray(arr,n);
     cout<<endl;
     while(arr[i]==0){
       i++;
     }
     while(arr[j]==1){
       j--;
     }
     //arr[i]==1 and arr[j]==0;
     swap(arr[i], arr[j]);
     i++;
     j--;
   }
}
 int main()
 {
   int arr[6]={0,0,1,1,1,0};
   sortone(arr,6);
   printArray(arr,6);
    return 0;

 }
