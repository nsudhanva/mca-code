var array = document.getElementById("array");
console.log(array);

var button = document.getElementById("button");
var button2 = document.getElementById("button2");
button.addEventListener('onclick', function () {
    alert("Hello");
});

var names = ["Sudhanva", "Narayana", ["Prateek", "Jaiswal"] , "Shreedhar"];
var numbers = [1, 2, 3, 4, 5, 2];

var x = [];

x.push("Hello");
x.push(3);

var laptop = {"hello" : {"lenovo" : 10}, "hello2" : "msi"};
console.log(laptop);
console.log(x);

array.innerHTML += names + "<br>";
array.innerHTML += "Sorted: " + names.sort() + "<br>";
array.innerHTML += "Numbers: " + numbers + "<br>";
array.innerHTML += "Numbers Sorted: " + numbers.sort() + "<br>";
array.innerHTML += "Numbers Slice: " + numbers.slice(1, 2) + "<br>";

function hello(){
    // alert("hello");
}

// var value = prompt("Enter something: ");
console.log(value);