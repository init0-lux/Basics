package main 
import "fmt"

func main(){
	fmt.Println("Hello")

	var name string = "jeff"
	name1 := "Hello jeff"

	name2, age, flloat := "heeef", 33, 44.3

	fmt.Println(name1, name2, age, name, flloat)

	myArray = [3]string
	mArray[0] = "this is an array"
	mArray[2] = "last element"

	myMap = map[string]string
	myMap["robot"] = "dict"

	for x := 0; x < 3; x++{
		fmt.println(myArray[x], myMap["robot"])
	}
}

