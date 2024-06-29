var message = "in global";
console.log("global: message = " + message);

var a = function () {
  var message = "inside a";
  console.log("a: message = " + message);

  var b= function  () {
    console.log("b: message = " + message); 
  }
  b(); // call to b() is here, but not executed yet!

}

a();