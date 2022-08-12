                       /// // Problem-1 //////


                       function radianToDegree(radian){
                        if (typeof radian === 'number'){
                            const degree = radian * (180/Math.PI);
                            return degree.toFixed(2);
                        }
                        //this is for Valid variable ////
                        else {
                            return 'Valid !  Please Enter a Number';
                        }
                        }
                      
                                    //  Completed problem-1  /////
                        
                        
                        
                                                                    // //// Problem -2/////
                        
                        function  isJavaScriptFile(fileName){
                            if (typeof fileName == 'string'){
                                // for slice last 3 character ////
                                const end3Charecter  =fileName.slice(-3); 
                            // ///// for cheaking include **'.js'**///
                                const isjsFile = end3Charecter.includes('.js');
                                // / it will return bulean for file type//////
                            return isjsFile;
                            }
                        ////////else is for Invalid or wrong input////
                            else{
                                return 'Invalid! Please Provide a String';
                            }
                        }
                    
                                        /////// Complete  Problem-2 ////
                        
                        
                        
                                                                 //// Problem-3////
                        
                        function  oilPrice(dieselAmount ,patrolAmount,octanAmount){
                                // //  /this if condition is for number dataType////
                            if (typeof dieselAmount == 'number' && typeof patrolAmount == 'number' && typeof octanAmount == 'number' ){
                            
                            // for per liter oil price //////
                            const dieselPerLitre = 114;
                            const patrolPerLitre = 130;
                            const octanPerLitre = 135;
                        
                            const dieselCost = dieselPerLitre*dieselAmount;
                            const patrolCost = patrolPerLitre*patrolAmount;
                            const octanCost = octanPerLitre*octanAmount;
                        
                            const totalCost = dieselCost+patrolCost+octanCost;
                        /////// Go>>>>return for total oilPrice  count////
                        return totalCost;
                            }
                        ////for Invalid variable without number  ////
                        else{
                            return 'Invalid!   Please, Provide number in Amount .'  }
                        }
                                        //////completed Problem-3 /////
                        
                                                              ////  Problem-4  /////
                        
                        function publicBusFare(peopleNumber){
                            let publicBusPercost = 250;
                            let busCapacity = 50;
                            let microCapacity = 11;
                        // /////this if condition is for only number type //////
                            if(typeof peopleNumber == 'number'){
                            let busRemain = peopleNumber % busCapacity;
                            // rest people from bus//
                            let microRemain = busRemain%microCapacity;
                            let publicBuscost = microRemain*publicBusPercost;
                            return publicBuscost;
                            }
                            // for Invalid Number////
                        else{
                            return 'InValid! Please, Provide by Enter a Number.';
                        }
                        }
                                        // //Problem-4 closed////
                        
                        
                        
                                               ////// // Problem -5///////
                        
                        function  isBestFriend(myself,abir){
                            //// for bestFriend check ///
                           const myNames = myself.name1;    
                              /////name1 is a property of myself object//////
                           const abirNames = abir.name2; 
                                ////name2 is prperty of abir object ///
                        const myFriend = myself.friend1;   
                           ////friend1 is prop. of myself///////
                        const abirFriend = abir.friend2;      
                        /// it is a property of abir object//////
                        
                        // for valid vaiable //////
                        const myselfType = typeof myself;
                        const abirType = typeof abir;
                        // / this condition is for == are they best friends ?////
                        if(myNames ==abirFriend && abirNames==myFriend && myselfType== 'object'&& abirType=='object'){
                            return true;
                        }
                        // ///this condition is for Invalid variable or input /////
                        else if(myselfType != 'object' || abirType != 'object'){
                            return 'Invalid ! Please Provide an Object'
                        
                        }
                        // //this condition for they are not bestfriends////
                        else{
                             return false;
                            }
                        }
                        //  problem -5  completed ///
                        
                        // /// *****  COMPLETE MY ASSIGNMENT-4 ****Thanks, Jankar vai! /////