// This program demonstrates how for loops are written in Kotlin
fun main(){
	// This is how we use for loops
	print("Enter the size of the Array that you want to print(only 3 tries): ")
	var tries: Int = 3
	var size: Int? = null
	var flag: Boolean = false
	for(i in 0..(tries-1)){ // This is how a normal for loop looks like in Kotlin. Also the second value which is (tries-1) is inclusive
		size = readln().toIntOrNull()?:continue
		flag = true
		break
	}
	if(!flag) {
		println("Invalid Input! You have ${tries-3} tries left")
		return
	}
	println("Enter the numbers of the Array: ")
	var temp: Int? // This is how we can declare a variable but not initialized it
	val Array = mutableListOf<Int>()
	for(i in 0 until size!!){ // This is similar to the above but the catch is size is not inclusive
		print("Enter the number at index $i: ")
		temp = readln().toIntOrNull()
		if(temp == null){
			println("Entered Value was $temp since it is not INT so the number at index $i is ignored")
			continue
		}
		Array.add(temp)
	}
	println("These are the elements of the Array: ")
	for(num in Array){ // This similar to range-based array in C++
		if(num == Array[Array.lastIndex]){ 
			println(num)
			break
		}
		print("$num, ")
	}
	println("These are the elements in reverse order: ")
	for(i in Array.size-1 downTo 0){ // This is how we can iterate in reverse order. Also both side which is (Array.size-1) and 0 are inclusive
		if(i == 0) {
			println(Array[i])
			break
		}
		print("${Array[i]}, ")
	}
	var sum: Int = 0
	print("Sum of values at even indices: ")
	for(i in 0 until (Array.size) step 2) sum += Array[i] // using the step we can jump to next value of i higher than 1 which is default
	println(sum)

	print("Enter a String that you want to reverse: ")
	val str: String = readln()
	val new_str = buildString{ // Using the buildString function we can create Strings
		for(i in str.lastIndex downTo 0) append(str[i]) // This is basically means is that we can iterate over a String because under the hood String is an array of characters 
	}
	println("The reversed string is: $new_str")

	print("Enter the number that you want to search in the Array: ")
	val search1 = readln().toIntOrNull()
	if(search1 == null) {
		println("Entered value is invalid!! Run the Program again to enter a valid INT")
		return
	}
	flag = false
	for((key, value) in Array.withIndex()) { // This is how can we iterate over index and value simultaneously in a for loop
		if(value == search1){
			println("The Number at Index $key is: $value")
			flag = true
			break
		}
	}
	if(!flag) println("Searched Element Not Found in the Array.")

	print("Enter the Number whose index you want to Search: ")
	val search2 = readln().toIntOrNull()
	if(search2 == null){
		println("Entered value is invalid!! Run the Prgram again to enter a valid INT")
		return
	}
	flag = false
	for(i in Array.indices){ // using the .indices we can iterate over the indices of an array
		if(Array[i] == search2) {
			println("The Number $search2 is at index $i")
			flag = true
			break
		}
	}
	if(!flag) println("Searched Number does not exist in the Array.")

	outer@ for (i in 1..3) { // The outer is not a keyword and it is like a point in the code which means when referenced the execution of the code comes to this point
		for (j in 1..3) {
			if (j == 2) break@outer // since the outer has been referenced the execution of the code jumps from here to the point where the outer was declared which is the outer loop basically
			println("$i $j")
		}
	}

	/*
	NOTE: 
	i in for loop is read-only and we cannot increase or decrease the value inside the loop.
	It is similar to for loops in Python.
	Also, if we try to increase or decrease the value of the range of the for loop inside the loop then it will throw error.
	*/
}
