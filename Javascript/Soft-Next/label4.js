// ! Problem--- 1: Object Transformation
// Create an array of objects representing customers with 'name', 'purchases', and 'loyaltyPoints' properties. Write a function to transform the array by doubling the 'loyaltyPoints' of customers with more than 5 purchases.

let customers = [
  { name: "Customer1", purchases: 5, loyaltyPoints: 100 },
  { name: "Customer2", purchases: 10, loyaltyPoints: 200 },
  { name: "Customer3", purchases: 8, loyaltyPoints: 150 },
  // Add more customers as needed
];

function doubleLoyaltyPoints(customersArray) {
  const customers = customersArray.map((customer) => {
    if (customer.purchases > 5) {
      return { ...customer, loyaltyPoints: customer.loyaltyPoints * 2 };
    }
    return customer;
  });
  return customers;
}

let transformedCustomers = doubleLoyaltyPoints(customers);

// Display the transformed array
console.log(transformedCustomers);
// ! Problem---2 : Function Memoization
// Implement a memoization function that caches the results of expensive function calls and returns the cached result when the same inputs occur again.

// ! Problem--- 3: Object Sorting with Multiple Criteria
// Create an array of objects representing products with 'name', 'price', and 'category' properties. Write a function to sort the array first by 'category' in ascending order and then by 'price' in descending order within each category.
// Task:
// // Example:
// const array1 = [1, 2, 3, 4, 5];
// const array2 = [3, 4, 5, 6, 7];
// console.log(findUniqueElements(array1, array2)); // Output: [1, 2, 6, 7]

// Demonstrate the workflow of the function being used here to find out unique from 2 array
// Input array of objects representing products
const products = [
  { name: "Product1", price: 30, category: "Electronics" },
  { name: "Product2", price: 15, category: "Clothing" },
  { name: "Product3", price: 25, category: "Electronics" },
  { name: "Product4", price: 18, category: "Clothing" },
];

// Function to sort the array
function sortProducts(productsArray) {
  return productsArray.sort((a, b) => {
    // First, sort by category in ascending order
    if (a.category < b.category) {
      return -1;
    } else if (a.category > b.category) {
      return 1;
    }

    // If categories are equal, sort by price in descending order
    return b.price - a.price;
  });
}

// Applying the sorting
const sortedProducts = sortProducts(products);
console.log(sortedProducts);

// ! Problem--- 4: Review this JavaScript code . The function mysteryFunctionX takes a number as input and creates an array representing a mysterious sequence up to that number. Can you decipher what this function does? Additionally, what would be the output for the provided example (mysteriousNumberX)?
// function mysteryFunctionX(limitX) {
// const sequenceX = [1];
// for (let x = 1; x <= limitX; x++) {
// sequenceX[x] = x * sequenceX[x - 1];
//       }
//       return sequenceX;
// }

// // Example usage:
// const mysteriousNumberX = 5;
// console.log(mysteryFunctionX(mysteriousNumberX));
// // Output: [1, 1, 2, 6, 24, 120]
