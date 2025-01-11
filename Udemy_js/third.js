// 3.32
'use strict';

let a = false;
const b = true;

if (b) a = true;
if (a) console.log("Hello World");

// 3.33
function logger() {
    console.log("Call Function");
}
logger();
logger();
logger();

function fruit(apples, oranges) {
    console.log(apples, oranges);
    const juice = apples + oranges;
    return juice;
}
const j = fruit(3, 4);
console.log(j);

// 3.34
const age = function (birthYear) {
    return 2037 - birthYear;
}
const newAge = age(2004);
console.log(age(2004), newAge);

// 3.35
//Arrow Function
const calAge = birthYear => 2078 - birthYear;
const age2 = calAge(1991);
console.log(age2);

// 3.36
function cut(f) {
    return f * 4;
}
function cake(choco) {
    const p = cut(choco);
    return p;
}
console.log(cake(4));

// 3.39
const f1 = 'tina';
const f2 = 'pari';
const f3 = 'Sourav';

const f = [f1, f2, f3];
console.log(f);
f[1] = 'kirti';
console.log(f);

const year = new Array(1991, 1993, 1995);
console.log(year[1]);
console.log(year.length);

const tina = ['tina jain', 20, 'RCOEM', 22 - 26];
console.log(tina);

// 3.40
const n = [1, 2, 3, 4];
const len = n.push(100);
console.log(n);
console.log(len);

const popped = n.pop();
console.log(popped);
console.log(n);

n.unshift('tina'); // enter in first
console.log(n);

n.shift();
console.log(n); // remove from first

console.log(n.indexOf(3));

console.log(n.includes('tina'));
console.log(n.includes(4));

// 3.42
const z = [
    'tina',
    'pari',
    'sourav',
    ['Gaurav', 'Kali'],
    'Riyu'
];

const x = {
    Name: 'tina',
    sis: 'Pari',
    bro: 'Sourav',
    cousin: ['Gaurav', 'Kali']
};

console.log(z);
console.log(x);

// 3.43
console.log(x.Name);
console.log(x.cousin);

const want = prompt("Enter what u want");
console.log(want);
if (x[want]) {
    console.log(x[want]);
}
else console.log('Wrong Request');

// 3.44
const c = {
    Name: 'tina',
    sis: 'Pari',
    bro: 'Sourav',
    birth: 2004,
    cousin: ['Gaurav', 'Kali'],

    age1: function () {
        this.curr = 2024 - this.birth;
        return this.curr;
    }
};
console.log(c.age1());

// 3.46
for (let i = 0; i < 5; i++) {
    console.log(`Good Morning ${i}`);
}

// 3.47
const abc = [
    'Riya',
    'Jain',
    2004,
    ['bjdjd', 'djhiej', 'jddhjs']
];

const types = [];
for (let i = 0; i < abc.length; i++) {
    console.log(abc[i]);
    types[i] = typeof (abc[i]);
}
console.log(types);

for (let i = 0; i < abc.length; i++) {
    if (typeof abc[i] != 'string') continue;
    console.log(abc[i]);
    if (typeof abc[i] == 'number') break;
}

// 3.48
for (let i = abc.length - 1; i >= 0; i--) {
    console.log(abc[i]);
}

// 3.49
let dice = Math.random() * 6;
console.log(dice);

// let dice1 = Math.trunc(Math.random() * 6) + 1;
// while (dice !== 6) {
//     console.log(dice1);
//     dice1 = Math.trunc(Math.random() * 6) + 1;
//     if (dice === 6) console.log("ENd of loop");
// }