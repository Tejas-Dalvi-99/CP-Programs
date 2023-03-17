#include <iostream>
using namespace std;

// Simple 3n+1 :- 

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



// ###########################################################################################################################################################



// Now find Maximum Count of Elements in 3n+1 form the numbers in the Given Range :- 

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
    if(a<1 || a>100000 || b<1 || b>100000){
        cout<<"Plz enter values between 0 and 100000 : "; 
        cin>>a; 
        cin>>b; 
    }
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




// ###########################################################################################################################################################

// Same program with Graphics (Colours and Some Design in Output Screen)

#include <iostream>
#include <windows.h>
#include <stdlib.h>
using namespace std;

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
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    system("CLS");
    int a,b;  
    SetConsoleTextAttribute(h, 14); 
    cout << "========================================================================================================================================";
    cout << "\n\n\n\t\t\t\t                         Enter Range: ";
    cin>> a;
    cin>> b;
    if(a<1 || a>100000 || b<1 || b>100000){
        cout<<"Plz enter values between 0 and 100000 : "; 
        cin>>a; 
        cin>>b; 
    }
    int max=1; 
    SetConsoleTextAttribute(h, 11); 
    cout<<"\n\n\n\t\t\t\t\t                     Counting ... "; 
    Sleep(1200); 
    SetConsoleTextAttribute(h, 13); 
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
    cout<<"\n\n\t\t\t\t                    "<<"1st Value"<<"    "<<"2nd Value"<<"      "<<"Max Count"<<"\n\n";
    SetConsoleTextAttribute(h, 10); 
    cout<<"\n\t\t\t\t                       "<<a<<"          "<<b<<"           "<<max<<"\n\n\n"; 
    
    SetConsoleTextAttribute(h, 7); 
    return 0; 
}
