"use strict";

// console.log(document.querySelector(".message").textContent);

// document.querySelector(".message").textContent = "correct number";

// document.querySelector(".num").textContent = 13;
// document.querySelector(".score").textContent = 40;
// document.querySelector(".guess").value = 0;

let score = 10;
let highScore = 0;
let secretNumber = Math.trunc(Math.random() * 100) + 1;
//document.querySelector(".num").textContent = secretNumber;

document.querySelector(".btn-again").addEventListener("click", function () {
  score = 10;
  secretNumber = Math.trunc(Math.random() * 20) + 1;
  document.querySelector(".score").textContent = score;
  document.querySelector(".num").textContent = "?";
  document.querySelector(".guess").value = "";
  document.querySelector("body").style.backgroundColor = "black";
  document.querySelector(".message").textContent = "Start Guessing...";
});

document.querySelector(".btn-check").addEventListener("click", function () {
  const guess = Number(document.querySelector(".guess").value);
  console.log(guess, typeof guess);
  //No input
  if (!guess) {
    document.querySelector(".message").textContent = "No number...";
  }
  // Correct
  else if (guess === secretNumber) {
    document.querySelector(".message").textContent = "Correct number";
    document.querySelector(".num").textContent = secretNumber;
    if (highScore < score) {
      highScore = score;
      document.querySelector(".highScore").textContent = highScore;
    }
    document.querySelector("body").style.backgroundColor = "green";
  }
  //Too high
  else if (guess > secretNumber) {
    if (score > 1) {
      document.querySelector(".message").textContent = "Number is too high";
      score--;
      document.querySelector(".score").textContent = score;
    } else {
      document.querySelector(".message").textContent = "You loose the game";
    }
  }
  // Too low
  else if (guess < secretNumber) {
    if (score > 1) {
      document.querySelector(".message").textContent = "Number is too low";
      score--;
      document.querySelector(".score").textContent = score;
    } else {
      document.querySelector(".message").textContent = "You loose the game";
    }
  }
});
