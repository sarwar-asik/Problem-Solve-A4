//   node index.js /////

// Assignment -4 /////

                        // Problem-1//////
//   const typeRadianNumber = 199;

// function radianToDegree(radian){
// if (typeof radian === 'number'){
//     const degree = radian * (180/Math.PI);
//     return degree.toFixed(2);
// }
// //this is for Valid variable ////
// else {
//     return 'Valid !  Please Enter a Number';
// }

// }
// const radian  = radianToDegree(typeRadianNumber);
// console.log(radian);
            //  Complete problem-1 remove call /////


                                            // //// Problem -2/////
// const fileType ='index.js';
// function  isJavaScriptFile(fileName){
//     if (typeof fileName == 'string'){
//         const end3Charecter  =fileName.slice(-3); 
//         const isjsFile = end3Charecter.includes('.js');
//     return isjsFile;
//     }
   
//     else{
//         return 'Invalid! Please Provide a String';
//     }
// }
// const isjsFile = isJavaScriptFile(fileType);
// console.log(isjsFile);
// ///// Complete  Problem-2 but remove call////



                                         //// Problem-3////

// const dieselAmount = 30;
// const patrolAmount = 20;
// const octanAmount = 10;
// function  oilPrice(dieselAmount ,patrolAmount,octanAmount){

//     if (typeof dieselAmount == 'number' && typeof patrolAmount == 'number' && typeof octanAmount == 'number' ){
    
//     // for per liter oil price //////
//     const dieselPerLitre = 114;
//     const patrolPerLitre = 130;
//     const octanPerLitre = 135;

//     const dieselCost = dieselPerLitre*dieselAmount;
//     const patrolCost = patrolPerLitre*patrolAmount;
//     const octanCost = octanPerLitre*octanAmount;

//     const totalCost = dieselCost+patrolCost+octanCost;
// ///////Go >>>>. return for total cost count////
// return totalCost;
//     }

// ////for Invalid variable without number  ////
// else{
//     return 'Invalid!   Please, Provide number in Amount .'  }
// }
// const totalOil = oilPrice(dieselAmount,patrolAmount,octanAmount);
// console.log(totalOil);
// close Problem-3  remove call /////

/                                             //////Problem-4/////

let peopleNumber = 235;

function publicBusFare(peopleNumber){
    let publicBusPercost = 250;
    let busCapacity = 50;
    let microCapacity = 11;

    if(typeof peopleNumber == 'number'){
    let busRemain = peopleNumber % busCapacity;
    
    // rest people from bus//
    let microRemain = busRemain%microCapacity;
    let publicBuscost = microRemain*publicBusPercost;
    return publicBuscost;
    }
    // for Invalid Number////
else{
    return 'Valid! Please,  Enter a Number.';
}
}
let totalPeople = publicBusFare(peopleNumber);
console.log(totalPeople);

//// Problem-4 close////



//   Problem -5///
// // const aboutMy =20;
// const aboutMy = {name:'sarwar',friend:'abir'};
// // const aboutAbir = 10;
// const aboutAbir = {name:'abir',friend:'sarwar'};
// function  isBestFriend(myself,abir){
//     //   for bestFriend check ///
//    const myNames = myself.name;
//    const abirNames = abir.name;
// const myFriend = myself.friend;
// const abirFriend = abir.friend;

// // for valid vaiable //////
// const myselfType = typeof myself;
// const abirType = typeof abir;
// //this condition is for == are they best friends ?////
// if(myNames ==abirFriend && abirNames==myFriend && myselfType== 'object'&& abirType=='object'){
//     return true;
// }
// // this condition is for Invalid variable or input /////
// else if(myselfType != 'object' || abirType != 'object'){
//     return 'Invalid ! Please Provide an Object'

// }
// // this condition for they are not bestfriends////
// else{
//      return false;
//     }
// }
// const bestFriends = isBestFriend(aboutMy,aboutAbir);
// console.log(bestFriends);
//  problem -5  complete but remove please console and call///
