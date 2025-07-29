#include<iostream>
#include<algorithm>
using namespace std;

int main(){

   int arr[] = {-3,0,1,-3,1,1,1,-3,10,0};
   int sz = 10;
   sort(arr, arr+sz);
   
    for(int i = 0; i< sz; i++){
        cout<<arr[i]<<" ";
    }
//    int count0 = 0;
//    int count1 = 0;
//    int count2 = 0; 
//    int count3 = 0;
//    int count4 = 0;
//    int count5 = 0;

//    for(int i = 0; i<sz; i++){

//     if(arr[i] == 0) count0++;
//      if(arr[i] == 1) count1++;
//      if(arr[i] == 2) count2++;
//      if(arr[i] == 3) count3++;
//      if(arr[i] == 4) count4++;
//      if(arr[i] == 5) count5++;
//    }

//    int arr2[] = {count1, count2, count3, count4, count5};
//    int sz2 = 5;
//       bool isUnique = true; // assume counts are unique

//    for(int i = 0; i<sz2; i++){
//       for(int j = i+1; j<sz2; j++){
//          if(arr2[i] == arr2[j]){
//             isUnique = false;
//             break;
//          }
//       }
//       if(!isUnique) break;
//    }

//    if(isUnique){
//     cout<<"true";
//    }
//    else{
//     cout<<"false";
//    }

    return 0;
}