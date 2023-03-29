document.getElementById('first').onfocus;
    function show(){
    alert(`Your Password is ${passStore}`);
    }
    function check(){
    let firstValue = document.getElementById('first').value;
    let secondValue = document.getElementById('second').value;
      console.log("." + secondValue + ".");
      if(firstValue != ''){
        if(firstValue == unameStore){
          if(secondValue == passStore){
            document.getElementById('check').placeholder = "correct";
            document.getElementById('submit').type = "reset";document.getElementById('check').style = "width: 11rem";
            alert("SUCCESSFUL LOGIN");
          }else{
            document.getElementById('check').style = "width: 28rem";
            document.getElementById('check').placeholder = "Password incorrect!!";
            document.getElementById('second').value = "";
          }
        }else{
          document.getElementById('check').style = "width: 28rem";
          document.getElementById('check').placeholder = "Username Incorrect!!";
          document.getElementById('submit').type = "reset";
        }
      }
    }