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

    char input = '7';

    if((input>= 'A' && input<='Z')||(input>= 'a' && input<='z'))
    {
        if(input == 'A' || input == 'E' || input == 'I' || input == 'O' || input == 'U' || input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u' )
        {
            cout<<"Vowel";

        }else{
            cout<<"Const";
        }
    }else{
        cout<<"Invalid character";
    }
 }