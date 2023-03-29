function now(form){
  var change = document.getElementById("email");
  change.textContent = form["first"].value + "." + form["last"].value + "@mymail.com";
  form.reset();
  form.elements["first"].focus();
}