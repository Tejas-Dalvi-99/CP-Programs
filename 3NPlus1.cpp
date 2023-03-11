#include <iostream>
using namespace std;

// int main(){

//     int num, counter=1;
//     cout<<"Enter Num: ";
//     cin>>num;
//     cout<<num<<" ";
// while(num!=1){
//     if(num%2==0){
//         num=num/2;
//     }
//     else{
//         num= num*3+1;
//     }
//     counter++;
//     cout<<num<<" ";
// }

//     cout<<"\nNo. of Count: "<<counter;

// }

    int ThreeN(int n){
        int counter=1; 
        while (n != 1)
        {
            if (n % 2 == 0)
            {
                n = n / 2;
            }
            else
            {
                n = n * 3 + 1;
            } 
            counter++;
        }
        return counter; 
    }

int main()
{
    int a,b;  
    // cout << "Enter Range: ";
    cin>> a;
    cin>> b; 
    int max=1; 

    for (int i = a; i <=b; i++)
    {   
        int count = ThreeN(i);
        // cout<<count; 
        // cout<<"\n";
        if(max<count){
            max=count; 
        }
    }
    system("CLS");
    cout<<a<<" "<<b<<" "<<max; 
    
}
