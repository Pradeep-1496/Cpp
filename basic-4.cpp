#include<bits/stdc++.h>

using namespace std;

void fun(int a[]){    
/*  Array always pass By Reference. No neet to use &a[]. 
    But You can only pass 1d array only.
    For 2d-3d array you have difine size of 2nd - 3rd Dimension in function.
    Eg: fun(int a[][20][30]){ code  }   */
    a[0] = 5;
}

int main(){
int a[4] = {1, 2, 3, 4};
cout << a[0] << endl;

fun(a);   //Passing Array 
cout << a[0] << endl;

return 0;
}

/* Solution for pass array in function in CP
- You can declare in global i.e outside main function.
- With difine size 
- Eg: const int N = 1e5+10;
      int array[N]; Or int array[N][N];  
- By this you dont have to pass array in any function and not to define in main function
*/