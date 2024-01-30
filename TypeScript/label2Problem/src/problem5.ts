import "colors"
// console.log("PRoblem 5");
type ParaTypes = unknown;
// 
function GetTypeFunc(params: ParaTypes) {
  //  console.log(params);
  if (typeof params === "string") {
    console.log(params);
  } else {
    const myError = new Error("It is not a string");
    // const { message } = myError;
    throw myError;
    // console.log(myError);
  }
}

GetTypeFunc('my string');
// GetTypeFunc('nn'.red.bold);
