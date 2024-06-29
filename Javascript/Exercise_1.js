const prompt= require("prompt-sync")({sigint:true});
// Exercise 1: Guess the number
// Prize Amount: Rs 500 Amazon voucher
let number = Math.floor(Math.random() * 100)+1;// Generate random number here
let   inputnum=prompt("Guess the num between 1 to 100\n");
let chances = 0;

while(inputnum!=number){
    if(inputnum>number){
      inputnum=prompt("Guess  the number is to smaller try again\n");
    
  }
  else if (inputnum<number){
    inputnum=prompt("Guess the num between is to high try again\n");
  }
  chances++;
}  
console.log("you guess the number is"+inputnum);
let score=100-chances;
console.log("the game is over your score is"+ score);
// Keep asking for the number until the correct number is guessed
// Increment the chances variable

// Eventually after the game is over, display the (100 - Number of chances) and the actual number 
