#include<iostream>
using namespace std;

int main()
{   
    
//     int array[] = {1 , 2, 23, 67,5,34,53,64};
//                 //   0 1  2   3  4  5  6  7  
//     int size = sizeof(array)/sizeof(array[0]);
//     cout<<size;

//     int deletedIndex = -1;

//     cout<<"Enter the delete index : ";
//     cin>> deletedIndex;

// //  step 1                         step 2           step 4
//     for(int i = deletedIndex ;   i < size     ;    i++    )
//     {
//         // step 3
//         array[i] = array[i + 1];



//         /*

//             array[deletedIndex] = array[deletedIndex + 1];
//             Dry run :  deleted = 2
//                 step 1 : i = 2
                
//                 loop 1
//                     step 2 : i < size 2 < 8 true
//                     step 3 : arr[2] =  arr[3] => arr[2] = 67
//                     step 4 : i++ => 3
                
//                 loop 2 : 
//                     step 2 : i < size 3 < 8 true 
//                     step 3 : arr[2] = arr[3] => arr[2] = 67
//                     step 4 : i++ => 4
                
//                 loop 3 : 
//                     step 2 : i < size 4 < 8 true 
//                     step 3 : arr[2] = arr[3] => arr[2] = 67
//                     step 4 : i++ => 5

//                 loop 4 : 
//                     step 2 : i < size 5 < 8 true 
//                     step 3 : arr[2] = arr[3] => arr[2] = 67
//                     step 4 : i++ => 6

//                 loop 5 : 
//                     step 2 : i < size 6 < 8 true 
//                     step 3 : arr[2] = arr[3] => arr[2] = 67
//                     step 4 : i++ => 7

//                 loop 6 : 
//                     step 2 : i < size 7 < 8 true 
//                     step 3 : arr[2] = arr[3] => arr[2] = 67
//                     step 4 : i++ => 8

//                 loop 6 : 
//                     step 2 : i < size 8 < 8 false 
//                     exit







//             array[i] = array[i + 1];
//             Dry run :  deleted = 2
//                 step 1 : i = 2
                
//                 loop 1
//                     step 2 : i < size 2 < 8 true
//                     step 3 : arr[2] =  arr[3] => arr[2] = 67
//                     step 4 : i++ => 3
                
//                 loop 2 : 
//                     step 2 : i < size 3 < 8 true 
//                     step 3 : arr[3] = arr[4] => arr[3] = 5
//                     step 4 : i++ => 4
                
//                 loop 3 : 
//                     step 2 : i < size 4 < 8 true 
//                     step 3 : arr[4] = arr[5] => arr[4] = 34
//                     step 4 : i++ => 5

//                 loop 4 : 
//                     step 2 : i < size 5 < 8 true 
//                     step 3 : arr[5] = arr[6] => arr[5] = 53
//                     step 4 : i++ => 6

//                 loop 5 : 
//                     step 2 : i < size 6 < 8 true 
//                     step 3 : arr[6] = arr[7] => arr[6] = 64
//                     step 4 : i++ => 7

//                 loop 6 : 
//                     step 2 : i < size 7 < 8 true 
//                     step 3 : arr[7] = arr[8] => arr[7] = garbage
//                     step 4 : i++ => 8

//                 loop 6 : 
//                     step 2 : i < size 8 < 8 false 
//                     exit
//         */
//     }

//     // array[7] = 0;

//     for(int i = 0 ; i < size - 1 ; i++)
//     {
//         cout<<"array["<<i<<"] : "<<array[i]<<endl;
//     }











    // Maximum or minimum

    int array[] = {1 , 2, 23, 67,5,34,53,64}; // reverse 64 53 34 5 67 23 2 1
                //   0 1  2   3  4  5  6  7  
    int size = sizeof(array)/sizeof(array[0]);

    int max = array[0];
    //  step 1      step 2     step 4
    for(int i = 1 ; i < size ; i++ )
    {
        // step 3
        if (!(max > array[i])) // max > array true(inter no)
        {
            max = array[i] ;
        }
    }


    cout<<max; 

    /*
    Logic : 
        max = 1 array[0]
        compare : 2  array[1]
            true
            max > array[1] // 1 > 2 false
            max > array[1] true ?  no  : yes
            max = array[1]
            max = 2
        
            compare : 23 array[2]
            max > array[2] 2 > 23 ? false yes(interchange)
            max = array[2] 
            max = 23

            compare : 67 array[3]
            max > array[3] 23 > 67 false ? yes interchange
            max = array[3] 
            max = 67

            comapre 5 array[4]
            max > array[4]  67 > 5 true ? no interchange
            max = 67

            compare 34 array[5]
            max > array[5] 67 > 34 true ? no interchange
            max = 67

            compare = 53  array[6]
            max> array[6] 67 > 53 true ? no interchange
            max = 67

            compare 64 array[7]
            max> array[7] 67 > 64 true ? no interchange 
            max = 67    
    */


    // min , reverse an array





}