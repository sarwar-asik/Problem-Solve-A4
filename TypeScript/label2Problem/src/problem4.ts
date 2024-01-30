import "colors";
console.log("problem3--------".green.bold);

class PersonClass {
  private name: string;
  private age: number;
  constructor(name: string, age: number) {
    this.name = name;
    this.age = age;
  }
  public getDetail(): string {
    return `Age of ${this.name} is ${this.age}`;
  }
}

class StudentClass extends PersonClass {
  private grade: number;
  constructor(name: string, age: number, grade: number) {
    super(name, age);
    this.grade = grade;
  }
  public getGrade() {
    return `He got GPA ${this.grade}`;
  }
}

const PersonCall = new PersonClass("Allu", 20);

console.log(PersonCall.getDetail());

const StudentCall = new StudentClass("Zillu", 20, 4);

console.log(StudentCall.getGrade());
