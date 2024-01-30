import "colors";
console.log("Problem3=====".green.underline.bold);

function reverseFunc<T>(para1: string[]): string[] {
  //   console.log(para1)

  const reverseData: string[] = [];
  for (let index = para1.length - 1; index >= 0; index = index - 1) {
    reverseData.push(para1[index]);
  }

  //   console.log(reverseData,);
  return reverseData;
}

const outputData: string[] = ["first", "second", "third", "fourth"];
const result1 = reverseFunc<string[]>(outputData);
console.log(result1);
