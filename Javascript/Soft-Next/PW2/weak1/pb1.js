console.log("Label 5 Problem");

//! PW2.01.01 Two Sum
// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.
//! Example:
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
// Example 2:

// Input: nums = [3,2,4], target = 6
// Output: [1,2]
// Example 3:

// Input: nums = [3,3], target = 6
// Output: [0,1]

// Constraints:

// 2 <= nums.length <= 104
// -109 <= nums[i] <= 109
// -109 <= target <= 109
// Only one valid answer exists.

const numb = [0, 2, 7, 15];

const target = 9;

function findSumIndex(nums, target) {
  const numMap = {}; // Hash map to store numbers and their indices

  for (let i = 0; i < nums.length; i++) {
    const complement = target - nums[i];
    console.log("nums[i]", nums[i], "complement", complement);
    // Check if the complement exists in the map
    console.log('numMap',numMap);
    if (complement in numMap) {
      // Return the indices of the two numbers
      return [numMap[complement], i];
    }

    // Store the current number and its index in the map
    numMap[nums[i]] = i;
  }

  // If no solution is found, return an empty array or handle it as needed
  return [];
}

const result = findSumIndex(numb, target);
console.log(result, "result");
