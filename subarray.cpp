#include <iostream>
#include <vector>

int main() {
     int array[] = {1, 2, 3, 4, 5};
     int sum=0;
     for(int i =0; i < 5; i++) {
         int subarray_sum = 0;
         for(int j=i; j < 5; j++) {
             
             subarray_sum += array[j];

         }
         if(subarray_sum > sum) {
             sum = subarray_sum;
         }
     }

     std::cout<< "Maximum subarray sum is: " << sum << std::endl;

     

    return 0;
}