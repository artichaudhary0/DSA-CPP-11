#include<iostream>
using namespace std;

/*
    Dynamic array :
        dataType arrayName[size] ; 



        1 +2 + 3 ... n
*/

int main()
{
    int size = 10 ;
    int array[size] ;

    // start 0 , end => n-1
    for(int i = 0 ; i < size ; i++ )
    {
        cout<<"array["<<i<<"] : ";
        cin>>array[i];

        /*
        [   354  , 33    , 3        , 443     ,  4     , 45      ,   5    ,  45      ,    56  ,  6    ]
        array[0] array[1]  array[2]  array[3]  array[4] array[5]  array[6] array[7]   array[8] array[9]
        
        step 1 : i = 0 , array[10] 

        loop 1 : 
            step 2 : i < 10 => 0 < 10 true 
            step 3 : Pr(array[0] : )
            step 4 : Cin(array[0]) = 354 cin => memory me jake value ko store karega
            step 5 : i = 1

        loop 2 : 
            step 2 : i < 10 => 1 < 10 true 
            step 3 : Pr(array[1] : )
            step 4 : Cin(array[1]) = 33 cin => memory me jake value ko store karega
            step 5 : i = 2

        loop 3 : 
            step 2 : i < 10 => 2 < 10 true 
            step 3 : Pr(array[2] : )
            step 4 : Cin(array[2]) = 3 cin => memory me jake value ko store karega
            step 5 : i = 3

        loop 4 : 
            step 2 : i < 10 => 3 < 10 true 
            step 3 : Pr(array[3] : )
            step 4 : Cin(array[3]) = 443 cin => memory me jake value ko store karega
            step 5 : i = 4

        loop 5 : 
            step 2 : i < 10 => 4 < 10 true 
            step 3 : Pr(array[4] : )
            step 4 : Cin(array[4]) = 4 cin => memory me jake value ko store karega
            step 5 : i = 5
        
        loop 6 : 
            step 2 : i < 10 => 5 < 10 true 
            step 3 : Pr(array[5] : )
            step 4 : Cin(array[5]) = 45 cin => memory me jake value ko store karega
            step 5 : i = 6
        
        loop 7 : 
            step 2 : i < 10 => 6 < 10 true 
            step 3 : Pr(array[6] : )
            step 4 : Cin(array[6]) = 5 cin => memory me jake value ko store karega
            step 5 : i = 7

        loop 8 : 
            step 2 : i < 10 => 7 < 10 true 
            step 3 : Pr(array[7] : )
            step 4 : Cin(array[7]) = 45 cin => memory me jake value ko store karega
            step 5 : i = 8

        loop 9 : 
            step 2 : i < 10 => 8 < 10 true 
            step 3 : Pr(array[8] : )
            step 4 : Cin(array[8]) = 56 cin => memory me jake value ko store karega
            step 5 : i = 9

        loop 10 : 
            step 2 : i < 10 => 9 < 10 true 
            step 3 : Pr(array[9] : )
            step 4 : Cin(array[9]) = 6 cin => memory me jake value ko store karega
            step 5 : i = 10

        loop 11 : 
            step 2 : i < 10 => 10 < 10 false 
            exit
        
        
        */

        
    }

    cout<<endl<<endl;
    int sum = 0 ;

    for(int i = 0 ; i < size ; i++ )
    {
        sum = sum + array[i];  
        /*12:09 PM
        [   354  , 33    , 3        , 443     ,  4     , 45      ,   5    ,  45      ,    56  ,  6    ]
        array[0] array[1]  array[2]  array[3]  array[4] array[5]  array[6] array[7]   array[8] array[9]
        
        loop 1 : sum = sum + array[0] => 0 + 354 => 354
        loop 2 : sum = sum + array[1] => 354 + 33 => 387
        loop 3 : sum = sum + array[2] => 387 + 3 => 390
        loop 4 : sum = sum + array[3] => 390 + 443 => 833
        loop 5 : sum = sum + array[4] => 833 + 4  => 837
        loop 6 : sum = sum + array[5] => 837 + 45 =>  882
        loop 7 : sum = sum + array[6] => 882 + 5 => 887
        loop 8 : sum = sum + array[7] => 887 + 45 => 932
        loop 9 : sum = sum + array[8] => 932 + 56 => 988
        loop 10 : sum = sum + array[9] => 988 + 6 => 994 
        loop 11 : false exit
        */
    }

    cout<<sum;

    
    // cout<<"array["<<0<<"] : ";
    // cin>>array[0];

    // cout<<"array["<<1<<"] : ";
    // cin>>array[1];

    // cout<<"array["<<2<<"] : ";
    // cin>>array[2];

    // cout<<"array["<<3<<"] : ";
    // cin>>array[3];

    // cout<<"array["<<4<<"] : ";
    // cin>>array[4];

    // cout<<"array["<<5<<"] : ";
    // cin>>array[5];

    // cout<<"array["<<6<<"] : ";
    // cin>>array[6];

    // cout<<"array["<<7<<"] : ";
    // cin>>array[7];

    // cout<<"array["<<8<<"] : ";
    // cin>>array[8];

    // cout<<"array["<<9<<"] : ";
    // cin>>array[9];

}