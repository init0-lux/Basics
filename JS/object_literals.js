const sales = "BMW";

function carTypes(name) {
	return name === "Honda" ? name : "Sorry, we don't sell ${name}.";
}

// same as func definition above
// use
var Car2 = (name) => {
	return name === "Honda" ? name : "Sorry we don't sell ${name}.";
};

const car = {
	myCar : "Toyota",
	getCar : carTypes("Honda"),
	getCar2 : Car2("Honda"),
	special: sales,
};

console.log(car.myCar);
console.log("Using getcar def " + car.getCar);
console.log("Using car2 var func " + car.getCar2);
console.log(car.special);
