//7 data types shortcut-nnssbbu
let a= null;
let b=123;
let c= "hello";
let d=Symbol("hello how are you");
let e=true;
let f=BigInt(567)+BigInt(44);
let h=undefined;
console.log(a, b,c,d,e, f, h);

let r = "Harry"
let w = 6
console.log(r + w)

// Chapter 1 - Q2
console.log(typeof (r+w))

//non primtive-objects
 const obj={
    name:"satyam",
    age:21,
    city:"jabalpur"

 };
 obj['name']= "sameer";
 obj['class']= "high";
 console.log(obj)
console.log(obj.name);