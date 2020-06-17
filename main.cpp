/* two sum 
 * @Description: Practicing solving problems with arrays.  If given an array of integes
 * return indices of 2 numbers that add up to a target.
 *
 * @Assumption: each input has exactly one soution and you may not use same element twice.
 * @Efficiency: Time = O(n^2), Space = O(1).
 */
#include <stdexcept>
#include <iostream>
using namespace std;

/* twoSum
 * @Description
 *    Takes an array and a target value, and searches for
 *    elements in array that equal target.
 * @Pre: None
 * @Post: Array searched, indices returned or no solution printed
 * @Param: nums, array of integers
 * @Param: target, integer to search for sum of two elements
*/
vector<int> twoSum(vector<int>& nums, int target) {
//get size of array
int lengthNums = sizeof(nums)/sizeof(nums[0]);
//brute force check each element
for (int i = 0; i < lengthNums; i++){
   for (int j = i + 1; j < lengthNums; j++){
      if (nums[j] == target - nums[i]){
        printf("Solution found at %d and %d", i,j);
        vector<int> solution{ i , j };
        return solution;
      }//end if match
   }//end for j
}//end for i
throw std::invalid_argument("No Solution for Target");
}


/* main driver
 * @Description
 *    Creates an array and a target, calls two sum.
 * @Pre: None
 * @Post: Array and Target created and searched, indices returned or no solution printed
*/
int main () {
   int arr[] = {8,7,2,5,3,1};
   int target = 10;
   twoSum(arr, target);
   return 0;
}//end main
