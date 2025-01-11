// 2.8
let js = 'Working'
if (js == 'Working') alert('Make website');
else alert("Sleep");
console.log(48 + 3 - 3);

// 2.9
console.log("Tina Borundia");
let fname = 'Pari';
console.log(fname);

// 2.11
let t = true
console.log(t);
console.log(typeof t);
console.log(typeof fname);
let n = 10;
console.log(typeof n);
n = 19.5
console.log(n);
console.log(typeof n);
console.log(typeof null);

// 2.12
const a = 1999
// a = 10; //not possible
var b = 'abc';
b = 'def';
console.log(b);

// 2.13
const age = 2024 - 2004
const tname = 'tina';
console.log(age, tname);
console.log(age / 2);

const firstName = 'tina';
const secondName = 'jain';
console.log(firstName + ' ' + secondName);

const age1 = 10;
const age2 = 5;
console.log(age1 > age2);
console.log(age1 > 50);

// 2.17
const myName = `I am ${firstName} and my age is ${age1}`;
console.log(myName);

// 2.18
const i = 10;
const k = i >= 20;
if (k) console.log('Hello');
else console.log('World ');

// 2.20
const num = '1991';
console.log(num + 10);
console.log(Number(num) + 10);

// 2.21
console.log(Boolean(0));
console.log(Boolean('tina'));
console.log(Boolean({}));
console.log(Boolean(''));

// 2.22
const z = '18'
if (z == 18) console.log("Double Equal");
if (z === 18) console.log('Triple Operator');

const fav = prompt('What is your fav num ?');
console.log(fav);
if (fav == 10) console.log('Good');
else console.log('World');

// 2.24
const p = true;
const q = false;
console.log(p && q);
console.log(p || q);
console.log(!p);

// 2.26
const day = 'Mon'
switch (day) {
    case 'Mon':
        console.log("Hello Mon");
        break;
    case 'tuesday':
        console.log("Hello Tues");
        break;
    case 'Wed':
    case 'Trus':
        console.log("WED and Thrus");
    default:
        console.log("Hello TDefault");
        break;
}

// 2.28
// Ternary Operator
const r = 23
r <= 18 ? console.log("YES") : console.log("NO");
