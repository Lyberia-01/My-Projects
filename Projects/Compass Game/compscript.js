let tup = document.getElementById('Top');
let left = document.getElementById('Left');
let right = document.getElementById('Right');
let bottom = document.getElementById('Bottom');
function tArr(){
  let temp = tup.innerHTML;
  tup.innerHTML = left.innerHTML;
  left.innerHTML = temp;
}
function mArr(){
  let temp = left.innerHTML;
  left.innerHTML = right.innerHTML;
  right.innerHTML = temp;
}
function bArr(){
  let temp = right.innerHTML;
  right.innerHTML = bottom.innerHTML;
  bottom.innerHTML = temp;
}
/* Inputs */
tInput = document.getElementById('t-input');
lInput = document.getElementById('l-input');
rInput = document.getElementById('r-input');
bInput = document.getElementById('b-input');

function resetAll(){
  tup.innerHTML = '&nbsp;';
  left.innerHTML = '&nbsp;';
  right.innerHTML = '&nbsp;';
  bottom.innerHTML = '&nbsp;';
  tInput.disabled = false;
  lInput.disabled = false;
  rInput.disabled = false;
  bInput.disabled = false;
  document.getElementById('update').disabled = false;
}

function enable(){
  tInput.value = "";
  lInput.value = "";
  rInput.value = "";
  bInput.value = "";
  tInput.disabled = true;
  lInput.disabled = true;
  rInput.disabled = true;
  bInput.disabled = true;
  document.getElementById('update').disabled = true;
}

function updateC(){
  tup.innerHTML = tInput.value;
  left.innerHTML = lInput.value;
  right.innerHTML = rInput.value;
  bottom.innerHTML = bInput.value;
  enable();
}