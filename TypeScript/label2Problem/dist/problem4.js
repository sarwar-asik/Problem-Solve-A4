"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
require("colors");
console.log("problem3--------".green.bold);
class PersonClass {
    constructor(name, age) {
        this.name = name;
        this.age = age;
    }
    getDetail() {
        return `Age of ${this.name} is ${this.age}`;
    }
}
class StudentClass extends PersonClass {
    constructor(name, age, grade) {
        super(name, age);
        this.grade = grade;
    }
    getGrade() {
        return `He got GPA ${this.grade}`;
    }
}
const PersonCall = new PersonClass("Allu", 20);
console.log(PersonCall.getDetail());
const StudentCall = new StudentClass("Zillu", 20, 4);
console.log(StudentCall.getGrade());
