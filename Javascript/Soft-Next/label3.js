// !Problem-1: Array Reduction
// Create an array of numbers. Write a function that uses the reduce method to calculate the sum of all even numbers in the array.
const numbers = [1, 2, 12, 4, 5, 6, 7, 8, 9, 10];

const sumEvent = numbers.reduce((accumulator, currentValue) => {
  //   console.log("acc", accumulator, "current", currentValue);
  if (currentValue % 2 === 0) {
    return accumulator + currentValue;
  } else {
    return accumulator;
  }
}, 0);

// console.log(sumEvent);

// !Problem-2: Leap Year Checker
// Write a function that determines whether a given year is a leap year.

function isLeapYear(year) {
  if (year % 4 === 0 && (year % 100 !== 0 || year % 400 === 0)) {
    console.log("it is a leap year");
  } else {
    console.log("it is not a leap year");
  }
}

isLeapYear(2020);

// !Problem-3: Count Vowels:
// Write a function that counts the number of vowels in a given string.

function CountVowels(text) {
  const count = text.match(/[aeiou]/gi).length;
  return count;
}

function CountVowel2(text) {
  let count = 0;
  for (let letter of text.toLowerCase()) {
    if (["a", "e", "i", "o", "u"].includes(letter)) {
      count++;
    }
  }
  return count;
}

console.log("CountVowels", CountVowels("this is a string"));
console.log("CountVowels2", CountVowel2("this is a string"));

// Example: Happy New Year
// !Problem-4: Unique Values
// Create an array of numbers with some duplicate values. Write a function to filter out the duplicate values and return a new array with only unique numbers. Print the result.
const numbersWithDuplicates = [1, 2, 3, 4, , 4, 4, 2, 5, 6, 3];

const uniqueValues = numbersWithDuplicates.reduce(
  (accumulator, currentValue) => {
    if (!accumulator.includes(currentValue)) {
      accumulator.push(currentValue);
    }
    return accumulator;
  },
  []
);

console.log(uniqueValues);
// !Problem-5: Find Maximum Value:
// Write a function that takes an array of numbers and returns the maximum value.

const maxArray = [2, 3, 10, 40, 2, 5, 7, 20, 70];

function maxNumber(array) {
  const maxValue = Math.max(...array);
  return maxValue;
}

console.log("MaxValue", maxNumber(maxArray));

// !Problem-6: Advanced Sorting
// Create an array of objects representing students with 'name' and 'grades' properties. Write a function to sort the students by average grade in descending order.
const students = [
  { name: "Alice", grades: [90, 85, 92] },
  { name: "Bob", grades: [88, 76, 94] },
  { name: "Charlie", grades: [195, 89, 91] },
  // Add more students as needed
];

function sortByAverage(students) {
  return students.sort((a, b) => {
    const totalGrades1 = a.grades.reduce((acc, current) => acc + current, 0);
    const totalGrades2 = b.grades.reduce((acc, current) => acc + current, 0);
    return totalGrades1 - totalGrades2;
  });
}

console.log("sortby Average", sortByAverage(students));

// !Problem-7: Functional Programming - Reduce
// Write a function that uses the reduce function to calculate the total value of an array of objects with a 'quantity' and 'price' property.interview

const products = [
  { name: "Product1", price: 25.99, quantity: 10 },
  { name: "Product2", price: 14.95, quantity: 20 },
  { name: "Product3", price: 39.99, quantity: 15 },
  // Add more products as needed
];

const totalValue = products.reduce((acc, current) => {
  return acc + current.price * current.quantity;
}, 0);

console.log(totalValue);
// !Problem-: Array Intersection
// Write a function that takes two arrays and returns a new array containing only the elements that appear in both arrays.
function findCommonElements(array1, array2) {
  const newArray = [...array1, ...array2];

  // return newArray;
  const commonArray = newArray.reduce((acc, current) => {
    if (
      !acc.includes(current) &&
      array1.includes(current) &&
      array2.includes(current)
    ) {
      acc.push(current);
    }
    return acc;
  }, []);

  return commonArray;
}

// Example usage:
const array1 = [1, 2, 3, 4, 5];
const array2 = [3, 4, 5, 6, 7];

const commonElements = findCommonElements(array1, array2);
console.log("Common Elements:", commonElements);
