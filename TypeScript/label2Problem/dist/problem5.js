"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
require("colors");
// 
function GetTypeFunc(params) {
    //  console.log(params);
    if (typeof params === "string") {
        console.log(params);
    }
    else {
        const myError = new Error("It is not a string");
        // const { message } = myError;
        throw myError;
        // console.log(myError);
    }
}
GetTypeFunc('my string');
// GetTypeFunc('nn'.red.bold);
