#include<iostream>
using namespace std;

int main(){

    int arr[3][4] = {1, 2, 3, 4, 55, 6, 7, 8, 9, 10, 11, 12};

    int i = 1;
    int Isum = 0;
    int maxM =0;

        for(int row = 0; row<3; row++ ){
            int rowSum =0;
            for(int col = 0; col<4; col++){
                rowSum = rowSum +  arr[row][col];
            }
            if(rowSum > maxM) Isum++;

            maxM = max(maxM,rowSum);

            cout<<" Sum of element in row "<<i <<" is "<< rowSum <<endl;
            i +=1;
        }
        cout<<" Largest element is "<< maxM << " in row " << Isum<<endl; 


        cout<<endl;
    
    int j =1;
        for(int col = 0; col<4; col++ ){
            int ColSum =0;
            for(int row = 0; row<3; row++){
                ColSum = ColSum +  arr[row][col];
            }
            cout<<" Sum of element in column "<<j <<" is "<< ColSum <<endl;
            j +=1;
        }


}