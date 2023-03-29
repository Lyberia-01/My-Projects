'use strict';

const screenValue = document.querySelector('.screen');
const pushToScreen = function(result){
  screenValue.value += result;
}

const ans = function(){
  screenValue.value = eval(screenValue.value);
}

const remove = function(){
  console.log(typeof(screenValue.value))
  screenValue.value = screenValue.value.slice(0, -1);
}

const clr = function(){
  console.log('test');
  screenValue.value = "";
}
