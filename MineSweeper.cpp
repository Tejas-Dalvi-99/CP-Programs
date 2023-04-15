#include <bits/stdc++.h>
using namespace std; 

int main(){

int rows , cols ; 
cout << "Input the No of Cols & Rows: ";
cin>>rows>>cols; 

char field[rows][cols];
int intField[rows][cols];  

cout << "Input the elements: \n";

for(int i = 0; i<cols; i++){
    for(int j=0; j<rows; j++){
        cin>>field[i][j]; 
    }
}

for(int i = 0; i<cols; i++){
    for(int j=0; j<rows; j++){
        intField[i][j]=0;  
    }
}

for(int i = 0; i<cols; i++){
    for(int j=0; j<rows; j++){
        if(field[i][j]=='*'){
            intField[i][j]=-1; 
        } 
    }
}


for(int i = 0; i<cols; i++){
    for(int j=0; j<rows; j++){
        if(intField[i][j]==-1){
            for(int p = i-1; p <= i+1; p++){
                for(int q = j-1; q <= j+1; q++){
                    if (p < 0 || p >= cols || q < 0 || q > rows || intField[p][q] == -1){
                        continue;
                    }
                    intField[p][q]++;
                }
            }
        }  
    }
}

for(int i = 0; i<cols; i++){
    for(int j=0; j<rows; j++){
        cout<<intField[i][j]<<"  "; 
    }
    cout<<"\n"; 
}

return 0;  
}
