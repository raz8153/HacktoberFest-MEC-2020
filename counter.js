var number = document.querySelectorAll('#counter');
var counter = 0;

const increment = () => {
    counter++;
    number.innerText = counter;
}

const decrement = () => {
    counter--;
    number.innerText = counter;
}

const reset = () => {
    counter = 0;
    number.innerText = counter;
}