# l2tsa1-basic-typescript-sarwar-asik

# Questions and Answer with Typescript

## 1.What is TypeScript, and how is it different from JavaScript?

            Type is JS Develop language . It is statically compiled language . TypeScript code declare every  Javascript things with types .It is clean and simple Javascript form of code .

            **Deferent***
            Javascript is LightWeight ,Object-oriented firstclass language but Typescript is powerfull typesystem and generics includes of Javascript .
            Typescript have many feature of prototping but js has not it .Javascript first realesed at 1995 and Typescript first released in 2012

## 2.difference between "interface" and "type" in TypeScript?

#### Interface are essentially for describes the object data shapes . And type are defination of primitive data type .here the example are both ::::

        interface Person {
            name:string
            age:number
        }
        type Person2 ={
            name:string
            age:number
        }

## 3.example of how to use generics in TypeScript ?

     const myFunction =<T,K>(para1:T,para2:K):number=>{
        return para1+para2
     }
     myFunction<number,string>(10,sum)

## 4. What is the difference between an "unknown" and "any" type in TypeScript?

      we use 'any' for perform any operation and use 'unknown' type assertion .

## 5 .Example of how to use enums in TypeScript?

      We can enum in Typescript are ;;;;

      enum DataCondition {
        loading:"load",
        status:"success",
        error:"failed"
      }

## 6.How to use "type guards" with "in" and "typeof" operators in TypeScript?

      function getUser (user:{name:string,age:number}):string{
        if("age" in user){
          return "age have in the user"
        }
        else{
          return "empty age"
        }

        if(typeof user.name ==="string" ){
          return "valid name "
        }
        else{
          console.log("Invalid name")
        }
      }
      getUser({name:"Abdullah",age:25})
