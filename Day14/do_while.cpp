#include<iostream>
using namespace std;

/*
sum of first natural no. 
product of first natural no.
reverse a number 
check pallindrom
factorial of a no. 
count digits in a number
sum of digits
check prime number : 
fibonacci series



Exit : 
do-while loop : 

do{
    // statement
    // flow
}while(condition) ;
*/

int main()
{
    // 1 2 3 4 5 6 7 8 9 10
    int start = 1 ;
    int end = 5 ;
    do{
        cout<<start<<endl;
        start++;
    }while(start <= end); // 1 <= 0 false
    
    
    /*
     do{
        cout<<start<<endl;
        start++;
    }while(start <= end);
    
    step 1 : start = 1, end = 5
    
    loop 1 : 
        step 2 : P(S) => 1
        step 3 :  start++ => 2
        step 4 : start <= end => 2 <= 5 true
    
    loop 2 : 
        step 2 :  P(S) => 2
        step 3 : start++ => 3
        step 4 : 3 <= 5 true
    
    loop 3 : 
        step 2 : P(S) => 3
        step 3 :   start++=> 4
        step 4 : 4 <= 5 true
    
    loop 4 : 
        step 2 : P(S) => 4 
        step 3 : start ++ => 5
        step 4 : 5 <= 5 true
    
    loop 5 : 
        step 2 : P(S) => 5 
        step 3 : start ++ => 6
        step 4 : 6 <= 5 false 
        exit
    */
    
    /*
    do{
        cout<<start<<endl;
        start++;
    }while(start <= end);
    
    step 1 : start = 0, end = 5
    
    loop 1 : 
        step 2 : P(S) => 0
        step 3 :  start++ => 1
        step 4 : start <= end => 1 <= 5 true
    
    loop 2 : 
        step 2 :  P(S) => 1
        step 3 : start++ => 2
        step 4 : 2 <= 5 true
    
    loop 3 : 
        step 2 : P(S) => 2
        step 3 :   start++=> 3
        step 4 : 3 <= 5 true
    
    loop 4 : 
        step 2 : P(S) => 3 
        step 3 : start ++ => 4
        step 4 : 4 <= 5 true
    
    loop 5 : 
        step 2 : P(S) => 4 
        step 3 : start ++ => 5
        step 4 : 5 <= 5 true 
    
    loop 6 : 
        step 2 : P(S) => 5
        step 3 : start++ 6
        step 4 : 6 <=5 false 
        exit
    */

    
    /*
    do{
        start++;
        cout<<start<<endl;
    }while(start <= end);
    step 1 : start = 0, end = 5
    loop 1 : 
        step 2 : start++ => 1
        step 3 : P(S) => 1
        step 4 : start <= end => `1 <= 5 true
    
    loop 2 : 
        step 2 : start++ => 2
        step 3 : P(S) => 2
        step 4 : 2 <= 5 true
    
    loop 3 : 
        step 2 : start++=> 3
        step 3 : P(S) => 3
        step 4 : 3 <= 5 true
    
    loop 4 : 
        step 2 : start ++ => 4
        step 3 : P(S) => 4
        step 4 : 4 <= 5 true
    
    loop 5 : 
        step 2 : start ++ => 5
        step 3 : P(S) => 5
        step 4 : 5 <= 5 true 
    
    loop 6 : 
        step 2 : start ++ => 6
        step 3 : P(6)
        step 4 : 6 <=5 false 
        exit
    */
}












// Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std ;

// int main() {
    
    
//     // a b c  d ... z starting a end z
    
//     // char start = 'a';
//     // char end = 'z';
    
//     // do{
//     //     cout<<start<<" ";
//     //     start = start + 4; // a + b + c + d + e
        
//     // }while(start <= end);
    
//     int num = 345;
//     int last = num%10 ;
//     int first = 0 ;
//     // cout<<last;
    
//     while(num>0)
//     {
//         first = num;
//         num = num/10;
//     }
//     /*
//         step 1 : num = 345 , last = 5 , first = 0
//         loop 1 : 
//             step 2 : num>0 true
//             step 3 : first = num => 345
//             step 4 : num = 34
//         loop 2 : 
//             step 2 : num> 0 => 34 > 0 true
//             step 3 : first = num => 34
//             step 4 : num = 3
//         loop 3 :
//             step 2 : num>0 => 3 > 0 true
//             step 3 : first => num  3
//             step 4 : num = 0 
//         loop 4 : 
//             step 2 : 0>0 false
    
//     */
    
//     cout<<last + first;

//     return 0;
// }