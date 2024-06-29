let a =[1,2, 4,5 ]; // create a new array 
// map method 
let arr= a.map((value, index, array)=>{
    console.log(value, index, array);
    return value +2;
})
console.log(a);
console.log(arr);

let b=[2,4 ,5 ,6 ];
let c= b.filter((a)=>{
    return a<5;
    
    
})
console.log(c);
/* reduce is used to apply a function that reduces an array of values into a single output value*/
let d= [45,56,67,554];
let e= d.reduce((h1,h2,h3)=>{
    return h1+h2-h3;
})
console.log(e);
