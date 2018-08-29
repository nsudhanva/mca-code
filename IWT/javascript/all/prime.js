var prime = document.getElementById("prime");

for (var count = 0; count <= 100; count++) {

    var notPrime = false;
    for (var i = 2; i <= count; i++) {
        if (count % i === 0 && i !== count) {
            notPrime = true;
        }
    }
    if (notPrime === false) {
        prime.innerHTML = prime.innerHTML + count + "<br>";
    }
}