
class Demo {

  constructor(A, B) {
    this.No1 = A;
    this.No2 = B;

    console.log("Inside Constructor ")
  }

  Display() {
    console.log("Inside Display")
  }

}

function main() {
  dobj = new Demo(11, 21)
  console.log(dobj.No1)
  console.log(dobj.No2)

  console.log(dobj.Display)


}







main()