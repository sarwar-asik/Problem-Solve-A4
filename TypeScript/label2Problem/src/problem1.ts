import "colors";
console.log("Problem1=====>".green.underline.bold);


function RepeatFunc(para1: string, para2: number = 3): void {
  //   console.log(para1, para2);

  for (let ii = 0; ii < para2; ii++) {
    console.log(para1.red);
  }
}

RepeatFunc("RepeatString", 4);
