// This program demonstrates how to use loops in Kotlin
fun main(){
	// This is how we use while loops
	var flag: Boolean = true
	print("Enter the size of the Array that you want to make: ")	
	val ip1 =  readln().toIntOrNull()
	if(ip1 == null) flag = false
	if(!flag){ 
		println("Invalid Input! Array cannot be created")	
		return
	}
	println("Enter the elements of the Array of size $ip1:")
	var temp: Int? // This is how we can declare a variable without initializing it and also we can store other value instead of Int because of the ? operator
	var i = 0
	val array = mutableListOf<Int>() // It is similar to what vector<int> in C++ which is a dynamic array
	while(i != ip1){
		print("Enter the number at index $i: ")
		temp = readln().toIntOrNull()
		if(temp == null){
			flag = false
			break
		}
		array.add(temp)
		i++;
	}
	if(!flag) println("Invalid Input! Array cannot be created")
	else println("This is the entered Array: $array")
}
