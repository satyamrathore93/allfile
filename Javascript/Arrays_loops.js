let a =[1,2 ,3 ,false, "not Present",];
 a[0]=20;
 let n= a.length;
 for(let i=0; i<n;i++){
    console.log(a[i]);
 }
 console.log(typeof(a));
 a.forEach((element)=>{
   console.log(element*element);
 }
 )
 for(let i of a){
   console.log(i);  //for...of loop
 }
 for(let j in a ){
   console.log("the keys "+ j+ " has the value "+ a[j] );
 }
 let c= "sameer"; 
 let arr= Array.from(c); // convert the string into array
 console.log(arr);



 

