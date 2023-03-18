#include <iostream>
using namespace std; 
int main(){
    int dollar[] = {10, 20, 30};
    int cents[] = {00, 00, 00};
    int sum=0;
    int length = sizeof(dollar)/sizeof(dollar[0]);
    float PositiveDiff=0.00 , NegativeDiff=0.00 ; 

    for(int i=0; i<length; i++){
        dollar[i] = dollar[i]*100 + cents[i]; 
        sum+= dollar[i];  
    } 
    int avg = sum/length; 
    // cout<< sum<<" "; 
    // cout<< avg<<" "; 

    int diff[]={}; 

    for(int i=0; i<length; i++){
        diff[i] = dollar[i]-avg;   
    } 
    
    // for(int i=0; i<length; i++){
    //     cout<<diff[i]<<" ";    
    // } 

    for(int i=0; i<length;i++ ){
        if(diff[i]>0){
            PositiveDiff += (diff[i]/100); 
        }else{
            NegativeDiff += -(diff[i]/100); 
        }
    }

    if(PositiveDiff>NegativeDiff){
        // cout<<PositiveDiff<<" "; 
        printf("$%.2f", PositiveDiff); 
    }
    else{
        // cout<<NegativeDiff<<" "; 
        printf("$%.2f", NegativeDiff); 

    }


return 0; 
}
