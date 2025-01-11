"use strict";

const scoreP0 = document.querySelector("#score--0");
const scoreP1 = document.getElementById("score--1");
const diceI = document.querySelector(".dice");
const btnRoll = document.querySelector(".btn--roll");
const btnNew = document.querySelector(".btn--new");
const btnHold = document.querySelector(".btn--hold");
const curr0 = document.getElementById("current--0");
const curr1 = document.getElementById("current--1");
const player0I = document.querySelector(".player--0");
const player1I = document.querySelector(".player--1");

scoreP0.textContent = 0;
scoreP1.textContent = 0;
diceI.classList.add("hidden");

let scores = [0, 0];
let currentScore = 0;
let activePlayer = 0;
let playing = true;

const switchPlayer = function () {
  document.getElementById(`current--${activePlayer}`).textContent = 0;
  activePlayer = activePlayer == 0 ? 1 : 0;
  currentScore = 0;
  player0I.classList.toggle("player--active");
  player1I.classList.toggle("player--active");
};

btnRoll.addEventListener("click", function () {
  if (playing) {
    const diceNum = Math.trunc(Math.random() * 6) + 1;
    console.log(diceNum);
    diceI.classList.remove("hidden");
    diceI.src = `dice-${diceNum}.png`;

    if (diceNum != 1) {
      currentScore += diceNum;
      document.getElementById(`current--${activePlayer}`).textContent =
        currentScore;
    } else {
      switchPlayer();
    }
  }
});

btnHold.addEventListener("click", function () {
  if (playing) {
    scores[activePlayer] += currentScore;
    document.getElementById(`score--${activePlayer}`).textContent =
      scores[activePlayer];

    if (scores[activePlayer] >= 100) {
      playing = false;

      diceI.classList.add("hidden");
      document
        .querySelector(`.player--${activePlayer}`)
        .classList.add("player--winner");

      document
        .querySelector(`.player--${activePlayer}`)
        .classList.remove("player--active");
    } else {
      switchPlayer();
    }
  }
});

btnNew.addEventListener("click", function () {
  // 86
});
