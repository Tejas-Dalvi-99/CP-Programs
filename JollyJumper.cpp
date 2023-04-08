// Not working Properly 


#include <bits/stdc++.h>
using namespace std; 

    bool IsJolly(int arr[], int n){
        vector<bool> diffArr(n-1, false); 

        for(int i=0; i<n-1; i++){
            int d = abs(arr[i] - arr[i+1]); 
            if(d==0 || d>n-1 || diffArr[d] == true) 
                return false; 

            diffArr[d] == true; 
        } 
        return true;
    }

int main(){
    int n ; 
    cout<<"Enter No. Of elements : "; 
    cin>>n;
    int arr[n]; 

    for(int i=0; i<n; i++){
        cin>>arr[i]; 
    }


    if(IsJolly(arr, n)){
        cout<<"Given series is Jolly Jumper"; 
    }
    else{
        cout<<"Not Jolly Jumper"; 
    } 
    
    return 0; 
}
