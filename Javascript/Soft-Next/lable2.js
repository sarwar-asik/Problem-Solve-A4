// Problem Solving:
// Problem-1: Array Filtering and Mapping
//1. Create an array of objects, each representing a person with properties like name, age, and gender. Write a function to filter out all females and then map the remaining people to an array of names. Print the final result.


const people = [
  { name: 'Alice khan', age: 23, gender: 'female' },
  { name: 'Bob', age: 30, gender: 'male' },
  { name: 'Charlie', age: 22, gender: 'female' },

];

const filterAndMap = (peopleArray) => {
  const filteredPeople = peopleArray.filter(person => person.gender !== 'female');
  const namesArray = filteredPeople.map(person => person.name);
  return namesArray;
};


console.log(filterAndMap(people));


// Problem-2: Object Manipulation
// Create an array of objects representing books with properties like title, author, and year. Write a function that takes the array and returns a new array with only the book titles. Print the result.
// Functions

const books = [
  { title: 'calculas', author: 'mr b', year: 2000 },
  { title: 'mechanics', author: 'am son', year: 2010 },
  { title: 'physics', author: 'Stepen', year: 1995 },
  // Add more books as needed
];


const getBookTitles = (booksArray) => booksArray.map(book => book.title);

// Print the result
console.log(getBookTitles(books));


// Problem-3: Function Composition
// Write three functions: one to square a number, one to double a number, and one to add 5 to a number. Compose these functions to create a new function that squares a number, doubles the result, and then adds 5.


// Functions
const square = num => num ** 2;
const double = num => num * 2;
const add5 = num => num + 5;

// Function composition
const compose = (...functions) => input => functions.reduceRight((acc, fn) => fn(acc), input);
const squareDoubleAdd5 = compose(add5, double, square);

// Example usage
console.log(squareDoubleAdd5(3)); // Output: ((3^2) * 2) + 5 = 23


// Problem-4: Sorting Objects
// Create an array of objects representing cars with properties like make, model, and year. Write a function to sort the array of cars by the year of manufacture in ascending

const cars = [
  { make: 'Toyota', model: 'Camry', year: 2015 },
  { make: 'Japan', model: 'xl', year: 2010 },
  { make: 'Ford', model: 'Focus', year: 2018 },
];


const sortByYear = (carsArray) => carsArray.sort((a, b) => a.year - b.year);

// Print the sorted array
console.log(sortByYear(cars));

// Problem-5: Find and Modify
// Write a function that searches an array of objects for a specific person by name. If found, modify their age property. Print the updated array.


const findAndModify = (peopleArray, name, newAge) => {
  const person = peopleArray.find(person => person.name === name);

  if (person) {
    person.age = newAge;
  }

  return peopleArray;
};

// Example usage
const modifiedPeople = findAndModify(people, 'Bob', 35);
console.log(modifiedPeople);
