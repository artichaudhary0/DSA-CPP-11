#include<iostream>
using namespace std ;

int main(){ 
    int num = 345; 

//     if(num>0)
//     {
//         cout<<"no. is positive"<<endl;
//     }

//     char name = 'A';

//     // 'A' - 'Z'
//         if(name>= 'A' && name<='Z')
//         {
//             cout<<"Uppercase";
//         }
    


//      string password = "1234567890"; // cin
     
//      if(password == "1234567890")
//      {
//         cout<<"Welcome";
//      }

    // char input = '7';

    // if((input>= 'A' && input<='Z')||(input>= 'a' && input<='z'))
    // {
    //     if(input == 'A' || input == 'E' || input == 'I' || input == 'O' || input == 'U' || input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u' )
    //     {
    //         cout<<"Vowel";

    //     }else{
    //         cout<<"Const";
    //     }
    // }else{
    //     cout<<"Invalid character";
    // }

    // string day;
    // cout<<"Enter day : ";
    // cin>>day;

    // if(day=="monday")
    // {
    //     cout<<"Working day";
    // }else{
    //     cout<<"chutti";
    // }

    // monday 1 , tues = 2 , wed = 3 , thur = 4 , fri = 5 , sat = 6 ,sun = 7

    int day;
    cout<<"Enter no. of day";
    cin>>day;

    if(day>0 && day<=7)
    {
        if(day==6 || day==7)
        {
            cout<<"Weekend";
        }else{
            cout<<"Working";
        }
    }else{
        cout<<"Invalid";
    }
 }