

function addNewWEField() {
    // Create a new textarea element
    let newNode = document.createElement('textarea');
    newNode.classList.add('form-control');
    newNode.classList.add('weField');
    newNode.classList.add('mt-2');
    newNode.setAttribute('rows', 3);
    newNode.setAttribute('placeholder', 'Enter here');
  
    // Get references to the elements you want to insert the new node before
    let weOb = document.getElementById('we'); // Make sure you have an element with id "we"
    let weAddButtonOb = document.getElementById('weAddButton'); // Make sure you have an element with id "weAddButton"
  
    // Check if the elements exist before inserting the new node
    if (weOb && weAddButtonOb) {
      // Insert the new node before weAddButtonOb
      weOb.insertBefore(newNode, weAddButtonOb);
    } else {
      console.error('Element with ID "we" or "weAddButton" not found');
    }
  }
  function addNewAQField() {
    let newNode = document.createElement('textarea');
    newNode.classList.add('form-control');
    newNode.classList.add('aqField');
    newNode.classList.add('mt-2');
    newNode.setAttribute('rows', 3);
    newNode.setAttribute('placeholder', 'Enter here');
  
    // Get references to the elements you want to insert the new node before
    let aqOb = document.getElementById('aq'); // Make sure you have an element with id "aq"
    let aqAddButtonOb = document.getElementById('aqAddButton'); // Make sure you have an element with id "aqAddButton"
  
    // Check if the elements exist before inserting the new node
    if (aqOb && aqAddButtonOb) {
      // Insert the new node before aqAddButtonOb
      aqOb.insertBefore(newNode, aqAddButtonOb);
    } else {
      console.error('Element with ID "aq" or "aqAddButton" not found');
    }
  }

  //generating cv
  function generateCV() {
    // console.log("generating cv");

    let namefield = document.getElementById("namefield").value; // Use 'getElementById' (not 'getElementsById')
    let nameT1 = document.getElementById('nameT1'); // Use 'getElementById' (not 'getElementsById')
    nameT1.innerHTML = namefield;


    //direct
    document.getElementById('nameT2').innerHTML=namefield;
    //contact
    document.getElementById('contactT').innerHTML=document.getElementById("contactfield").value;
    //address
    document.getElementById('addressT').innerHTML=document.getElementById("addressfield").value;
    //links
    document.getElementById('fbT').innerHTML=document.getElementById("fbfield").value;
    document.getElementById('InstaT').innerHTML=document.getElementById("Instafield").value;
    document.getElementById('LinkeT').innerHTML=document.getElementById("Linkfield").value;
    //objective
    document.getElementById("objectiveT").innerHTML=document.getElementById("objectiveField").value;
    
    //we
    
      let wes = document.getElementsByClassName('weField');
      let str = "";
      for (let e of wes) {
          str = str + `<li>${e.value}</li>`; // Use template literals to interpolate the value
      }
      document.getElementById('weT').innerHTML = str;
      //aq
      let aqs = document.getElementsByClassName('aqField');
      let str1 = "";
      for (let e of aqs) {
          str1 += `<li>${e.value}</li>`;
      }
      document.getElementById('aqT').innerHTML = str1;
      //code for setting image
      let file=document.getElementById('imgField').files[0];
      console.log(file);
      let reader=new FileReader();
      reader.readAsDataURL(file);
      console.log(reader.result);
      //set the image to template
     reader.onloadend=function(){
      document.getElementById("imgTemplate").src=reader.result;
     };
     // Hide the form and display the generated CV
document.getElementById('cv-form').style.display = 'none';
document.getElementById('cv-template').style.display = 'block';

    }
      //print cv

      function printCV() {
        window.print();
      }


      
  
  


  
  
 