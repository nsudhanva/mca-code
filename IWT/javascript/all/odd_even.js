var odd = document.getElementById("odd");
var even = document.getElementById("even");

for(var i = -50; i <= 50; i++){
	if(i % 2 == 0){
		even.innerHTML = even.innerHTML + i + "<br>";
	}
}

for(var i = -50; i <= 50; i++){
	if(i % 2 != 0){
		odd.innerHTML = odd.innerHTML + i + "<br>";
	}
}