const prompt= require("prompt-sync")({sigint:true});
let age=prompt("enter your age");
age=Number.parseInt(age);
if(age>10 && age<20){
  console.log("your age is between 10 and 20")
}
let day= prompt("enter your fav day");
day = Number(day);
switch(day){
    case 1: "monday";
    break;
    case 2: "tuesday";
    break;
    case 3: console.log("wednesday");
    break;
    case 4: "Thursday";
    break;
    case 5: "Friday";
    break;
    case 6: "Saturday";
    break;
    case 7: "Sunday";
    break;
    default:"invalid day"


}
 (age>18)?console.log("drive"): (console.log("not drive"));