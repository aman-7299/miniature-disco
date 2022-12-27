// Print like wave 
/*#include<iostream>
 using namespace std;
  int main()
  {
    int arr[3][3];
    int mcol=3;
    int nrow=3;
    for(int row=0; row<3;row++){
         for(int col=0; col<3;col++){
            cin>>arr[row][col];
            
         }
    }
     for(int col=0;col<mcol;col++){
         if(col&1){
            for(int row=nrow-1;row>=0;row--){
       cout<<arr[row][col]<<" ";
            }
         }
         else{
             for(int row=0;row<nrow;  row++){
                cout<<arr[row][col]<<" ";
             }
         }
     }
return 0;
  }*/
  // Rotate arraya by 90 degree
  
   /* #include<iostream>
   using namespace std;
    void degreeanticlock(int arr[3][3], int n, int m){
         int ncol=3;
         int mrow=3;

     for(int j=0; j<ncol;j++){
         for(int i=mrow-1;i>=0;i--){
            cout << arr[i][j] << " ";
             
         }
         cout<<endl;
     }
    }
int main()
{
     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    //  for(int i=0; i<3; i++){
    //      for(int j=0;j<3;j++){
    //          cin>>arr[i][j];
    //      }
    //  }
     degreeanticlock(arr,3,3);
     return 0;
}*/
