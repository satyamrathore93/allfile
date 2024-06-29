//Q1
const prompt= require("prompt-sync")({sigint:true});
let a=[1,2 ,4, 5 ,6, 7];
let b= Number.parseInt(a);
a.push(8);
console.log(a);
//Q2
// let c=[1];
// let d;
// while(d!=0){
// d=prompt("enter the num");
// d=Number.parseInt(d)
// c.push(d);
// }
// console.log(c);
//Q3
let arr=[1,10,20, 50];
let n=arr.filter((val)=>{
    return val%10==0;
})
console.log(n);

//Q4
let g=[3, 4 ,5];
let sq= g.map((x)=>{
    return x*x;
})
console.log(sq);
//Q5 
let fa=[3, 4 ,5];
let fact= g.reduce((x1,x2)=>{
    return x1*x2;
})
console.log(fact);

