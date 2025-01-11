// 5.62

"use strict";
const data1 = [17, 21, 23];
const data2 = [12, 5, -5, 0, 4];
function forecast(arr) {
  let str = "";
  for (let i = 0; i < arr.length; i++) {
    str += `... ${arr[i]}ºC in ${i + 1} days`;
  }
  str += "...";
  console.log(str);
}
forecast(data1);
forecast(data2);
