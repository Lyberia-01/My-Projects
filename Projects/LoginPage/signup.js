      let unameStore = "";
      let passStore = "";
      function trye(){
        let pass = document.getElementById('password');
        let cpass = document.getElementById('confirm-password');
        if(pass.value == cpass.value){
          if(pass.value.length >= 6){
            document.getElementById('btn').type = "button";
            unameStore = uname.value;
            passStore = pass.value;
            document.getElementById('btn').type = "reset";
            return true;
          }else{
            console.log(pass.value.length);
            pass.value = "";
            cpass.value = "";
            pass.placeholder = "length must be greater than 5";
            return false;
          }
        }else{
          cpass.value = "";
          cpass.placeholder = "Input the same password";
          return false;
        }
        document.getElementById('btn').type = "submit";
      }
      /* sWITCH TO LOGIN PAGE */
      function switchDisplay(){
        if(trye()){
          document.getElementById('signup').style = "display: none";
          document.getElementById('log-in').style = "display: block";
        }
      }