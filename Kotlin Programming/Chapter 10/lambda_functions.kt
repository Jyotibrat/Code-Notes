// This program demonstrates how to use lambda functions in Kotlin
fun Int.reverse(): Int{
	var new_str = this@reverse.toString()
	return buildString(){ // This is a function which takes lambda function as input
		for(i in new_str.lastIndex downTo 0) append(new_str[i])
	}.toInt()
}

fun check(a: Int, lambda: (Int, Int) -> Boolean): Boolean{ // This is how we can pass a lambda function to a function
	return lambda(a, a.reverse())
}

fun main(){
	// This is how we write lambda functions
	print("Enter the number which is to be checked for Strobogrammatic Number: ")
	val ip = readln().toIntOrNull()
	if(ip == null){
		println("Invalid Input!!")
		return
	}
	val lambda = { a: Int, b: Int -> // This is a lambda function
		a == b
	}
	if(check(ip, lambda)) println("The Entered Number \"$ip\" is a Valid Strobogrammatic Number.")
	else println("The Entered Number \"$ip\" is not a Strobogrammatic Number.")
	
	/*
	NOTE:
		Lambda function does not have fixed data type.
		By this I mean is that we do not write like this val lambda_function_name: data_type .
		We can name a lambda function as we want to.
		When we pass a single element to a lambda function we can use 'it' to refer it inside the lambda function.
		In Kotlin, there are multiple pre-built functions which requires lambda function as input.
		Eg.: buildString, filter, etc.
	*/	
}
