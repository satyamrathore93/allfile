let name="Harry";
let namelen= name.length;//property
console.log("The length of the string is "+namelen);

let upper= name.toUpperCase() // methods
console.log(upper)
let lower= name.toLowerCase();;
console.log(lower)
let slice= name.slice(2,4);
console.log("Slicing from 2 to 4: "+slice);
let replace= name.replace("H","p");
console.log("Replacing H with p :"+replace);
let friend= "naman";
console.log(name.concat("is a friend of  ",friend));
let fr = "Meena           ";
console.log("Trimmed value is   "+fr.trim());