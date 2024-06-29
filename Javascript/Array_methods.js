let a=[1,2 ,3, 4 ,5 ];
console.log(a.length);//5

console.log(a.join("-")); //1-2-3-4-5

let c=a.pop();
console.log(a,c);

let d= a.push(6);
console.log(a, d);

let e= a.shift();
console.log(e,a);

let f= a.unshift(6);
console.log(a, f);

 delete a[0];
 console.log(a);

 console.log(typeof a)
 let h=a.toString()
console.log(typeof h);

let a2=[12,63 ,334 ,45, 46];
console.log(a.concat(a2));

let i = a.indexOf(4);//element 
console.log(i);//index

let j= a2.sort();//print Alphabatically
console.log(j);

let k= a.reverse();
console.log(k);

let l= a.slice(1,4);
console.log(l);

let numbers= [19, 78, 23, 66, 45];
let u= numbers.splice(2, 4, 4, 5 ,6);

console.log(numbers);
let compare=(a,b)=>{ //sort function 
    return a-b;
}
numbers.sort(compare);
console.log(numbers)
