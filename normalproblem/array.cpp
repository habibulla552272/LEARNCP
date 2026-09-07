#include <iostream>
using namespace std;

int main(){
    int nums[]={3,6,9,10,33};
    
    int smallest=nums[0];
    int largest=nums[0];
    int smallestIndex=0;
    int largestIndex=0;
    for(int i=0;i<sizeof(nums) / sizeof(nums[0]);i++){
        if(smallest>nums[i]){
            smallest=nums[i];
            smallestIndex=i;
        }
        if (largest<nums[i]){
            largest=nums[i];
        largestIndex=i;
        }
    }
    cout << "smallest " << smallestIndex << "smallest number " << smallest << endl;
    cout << "largest "<< largestIndex << "largest number " << largest << endl;
}
