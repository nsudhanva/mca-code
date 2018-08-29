var input  = prompt("Enter a number");

function fact(x){
	if(x == 0) {
		return 1;
	}

	return x * fact(x - 1);
}	

output = fact(input);

alert("Factorial: " + output);