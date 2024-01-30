"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
require("colors");
console.log("Problem3=====".green.underline.bold);
function reverseFunc(para1) {
    //   console.log(para1)
    const reverseData = [];
    for (let index = para1.length - 1; index >= 0; index = index - 1) {
        reverseData.push(para1[index]);
    }
    //   console.log(reverseData,);
    return reverseData;
}
const outputData = ["first", "second", "third", "fourth"];
const result1 = reverseFunc(outputData);
console.log(result1);
