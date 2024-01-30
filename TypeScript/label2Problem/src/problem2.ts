import "colors";
console.log("Problem2=====>".green.underline.bold);
// console.log("Problem1=====>".green.underline.bold);
interface PersonType {
  name: string;
  age: number;
}
function getAdultFuc(personPara: PersonType[]): object[] {
  //   console.log("start");
  // for (const adult of personPara) {
  //   if (adult.age >= 18) {
  //     return adult;
  //   }
  // }

   // console.log(personPara);
    const adultPerson =  personPara.filter(adult => adult.age >= 18)
    return adultPerson
    

}

const outData = [
  { name: "allu", age: 10 },
  { name: "nilu", age: 32 },
  { name: "milu", age: 30 },
  { name: "zinku", age: 8 },
];

const result1 = getAdultFuc(outData);

console.log(result1);
