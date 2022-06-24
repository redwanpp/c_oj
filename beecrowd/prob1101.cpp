// //Sequence of number and sum;

// #include<iostream>
// #define endl "\n"

// using namespace std;

// int main() {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
    
//     while(1) {
//         int i, sum;
//         int arr[2];

//         sum = 0;

//         for(i = 0; i < 2; i++) {
//             cin >> arr[i];
//         }
    
//         if(arr[0] <= 0 || arr[1] <= 0) {
//             return 0;
//         }        
//         else {
//             for(i = arr[1]; i <= arr[0]; i++) {
//                 cout << i << " ";
//                 sum += i;
//             }
//             cout << "Sum=" << sum << endl;
//         } 
//     }
//     return 0;
// }