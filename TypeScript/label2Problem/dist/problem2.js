"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
require("colors");
console.log("Problem2=====>".green.underline.bold);
function getAdultFuc(personPara) {
    //   console.log("start");
    // for (const adult of personPara) {
    //   if (adult.age >= 18) {
    //     return adult;
    //   }
    // }
    // console.log(personPara);
    const adultPerson = personPara.filter(adult => adult.age >= 18);
    return adultPerson;
}
const outData = [
    { name: "allu", age: 10 },
    { name: "nilu", age: 32 },
    { name: "milu", age: 30 },
    { name: "zinku", age: 8 },
];
const result1 = getAdultFuc(outData);
console.log(result1);
