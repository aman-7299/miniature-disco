#include<iostream>
using namespace std;
//to print row wise sum
void printColSum(int arr[][3], int i, int j){
cout<<"printing Sum--"<<endl;
    
      /*for(int i=0;i<3;i++){
          int sum=0;
        for(int j=0;j<3;j++){
             sum=sum+arr[i][j];
        }
        cout<<sum<<" ";
     }*/
    // cout<<endl;
     for(int j=0;j<3;j++){
         int sum=0;
        for(int i=0;i<3;i++){
            sum=sum+arr[i][j];
        }
        cout<<sum<<" ";

     }
     cout<<endl;
}
// Column wise sum print krwa do 

 int main()
 {
      int arr[3][3];
      for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
     }
       for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
      }
      printColSum(arr, 3, 3);

 }