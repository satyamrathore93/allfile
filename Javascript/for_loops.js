const prompt= require("prompt-sync")({sigint:true});
let a = prompt("enter the value of a ");
let b= Number.parseInt(a);
for(let i=0;i<b;i++){
  console.log(i);
}
const obj={
    name:"John",
    age:34,
     gender:"m"

}
for(let a in obj){
    console.log("the name of  property is "+a+" and its value is "+obj[a]);

}
for(let a of "harry"){
    console.log(a);
}