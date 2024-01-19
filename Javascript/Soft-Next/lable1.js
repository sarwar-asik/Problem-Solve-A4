// 1. তোমাকে নীচের লাইন গুলো যে ফরম্যাট এ আছে একইভাবে প্রিন্ট করতে হবে-

// “Recently I heard that you’ve achieved 95% marks in your exam.
// This is brilliant!
// I wish you’ll shine in your life!	Good luck with all the barriers(/\) in your life.”

const string1 =
  "“Recently I heard that you’ve achieved 95% marks in your exam. This is brilliant! \n I wish you’ll shine in your life! Good luck with all the barriers(/) in your life.”";

console.log(string1);

// 2. তোমাকে দুইটি ইন্টিজার ভ্যেলু ইনপুট নিতে হবে এবং তাদের যোগফল, বিয়োগফল, গুণফল এবং ভাগফল নীচে দেখানো ফরম্যাট এ দেখাতে হবে।

const value1 = 5;
const value2 = 2;

const sum = value1 + value2;
const multiple = value1 * value2;
const subtract = value1 - value2;
const divide = value1 / value2;

// 3. // তোমাকে একটি অঋণাত্মক (০ বা এর থেকে বড়) সংখ্যা নিতে হবে এবং বলতে হবে সংখ্যাটি জোড়(even) নাকি বিজোড়(odd)।

function checkEven(para1) {
  if (para1 < 0) {
    return;
  } else if (para1 % 2 === 0) {
    console.log("it is a even number");
  } else {
    console.log("it is a odd number");
  }
}

checkEven(10);

// 4. তোমাকে একটি ইন্টিজার ভ্যেলু ইনপুট নিতে হবে এবং বলতে হবে এটি ধনাত্মক(positive) নাকি ঋণাত্মক(negative) নাকি শূণ্য(zero)।

function checkType(para1) {
  if (para1 > 0) {
    console.log("It is a positive");
  } else if (para1 == 0) {
    console.log("It is 0");
  } else {
    console.log("it is a negative number");
  }
}
checkType(-18);


// 5.  ধরো তোমার এক বন্ধু তোমাকে বলেছে সে একটি Gucci Bag কিনবে যদি তার কাছে ১০ হাজার টাকা বা এর বেশি থাকে। নাহলে যদি তার কাছে ৫ হাজার বা এর বেশি টাকা থাকে তাহলে সে Levis Bag কিনবে। আর নাহলে সে নিউ মার্কেট থেকে কিছু (Something) কিনে নিবে। সে তোমাকে আরও বললো যে, যদি সে Gucci Bag কিনতে পারে এবং তার কাছে যদি ২০ হাজার টাকা এর বেশি থাকে তাহলে সে আরও একটি Gucci Belt কিনবে।

